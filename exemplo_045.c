/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/1
 * Prof. Marcelo Luiz Drumond Lanza
 *
 * $Author$
 * $Date$
 * $Log$
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

#define OK                              0
#define NUMERO_ARGUMENTOS_INVALIDO      1
#define ERRO_ABRINDO_ARQUIVO            2
#define ARQUIVO_CORROMPIDO              3
#define ERRO_LENDO_ARQUIVO              4
#define ERRO_ESCREVENDO_ARQUIVO         5

#define NUMERO_ARGUMENTOS               3
#define COMPRIMENTO_BUFFER              512

typedef unsigned char byte;

int
main (int argc, char *argv[ ])
{
  byte buffer [COMPRIMENTO_BUFFER];
  size_t lidos;
  FILE *leitura, *escrita;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("Uso: %s <arquivo-entrada> <arquivo-saida>\n",  argv [0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  if (!(leitura = fopen (argv [1], "r")))
  {
    printf ("Erro abrindo o arquivo: \"%s\"\n", argv [1]);
    printf ("Erro (#%i): %s\n", errno, strerror (errno));
    exit (ERRO_ABRINDO_ARQUIVO);
  }

  if (!(escrita = fopen (argv [2], "w")))
  {
    printf ("Erro abrindo o arquivo: \"%s\"\n", argv [2]);
    printf ("Erro (#%i): %s\n", errno, strerror (errno));
    fclose (leitura);
    exit (ERRO_ABRINDO_ARQUIVO);
  }
    exit (ERRO_ABRINDO_ARQUIVO);
  }

  while ((lidos =
          fread ((void *) buffer, 1, COMPRIMENTO_BUFFER, leitura)) > 0)
  {
    if ((fwrite ((void *) buffer, 1, lidos, escrita)) != lidos)
    {
      printf ("Erro escrevendo arquivo: \"%s\"\n", argv [2]);
      printf ("Erro (#%i): %s\n", errno, strerror (errno));
      fclose (leitura);
      fclose (escrita);
      remove (argv [2]);
      exit (ERRO_ESCREVENDO_ARQUIVO);
    }
  }

  if (ferror (leitura))
  {
    printf ("Erro lendo arquivo: \"%s\"\n", argv [1]);
    printf ("Erro (#%i): %s\n", errno, strerror (errno));
    fclose (leitura);
    fclose (escrita);
    remove (argv [2]);
    exit (ERRO_LENDO_ARQUIVO);
  }

  if (ferror (escrita))
  {
    printf ("Erro escrevendo arquivo: \"%s\"\n", argv [2]);
    printf ("Erro (#%i): %s\n", errno, strerror (errno));
    fclose (leitura);
    fclose (escrita);
    remove (argv [2]);
    exit (ERRO_ESCREVENDO_ARQUIVO);
  }

  fclose (leitura);
  fclose (escrita);
  printf ("Arquivo copiado com sucesso !!! (Sera?)\n");
  return OK;
}
/* $RCSfile$ */
