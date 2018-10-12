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

#define NUMERO_ARGUMENTOS               2
#define COMPRIMENTO_MAXIMO_NOME         50

int
main (int argc, char *argv[ ])
{
  char nome [COMPRIMENTO_MAXIMO_NOME + 1 + 1];
  char auxiliar [COMPRIMENTO_MAXIMO_NOME + 1 + 1];
  size_t indice, comprimento, linhas;
  FILE *arquivo;

  arquivo = fopen (argv [1], "w");
  if (arquivo == NULL) /* if (!arquivo) */
  /* if ((arquivo = fopen (argv [1], "w")) == NULL) */
  /* if (!(arquivo = fopen (argv [1], "w"))) */
  {
    printf ("Erro abrindo o arquivo: \"%s\"\n", argv [1]);
    printf ("Erro (#%i): %s\n", errno, strerror (errno));
    exit (ERRO_ABRINDO_ARQUIVO);
  }

  linhas = 0;
  do
  {
    printf ("Nome: ");
    fgets (nome, COMPRIMENTO_MAXIMO_NOME + 2, stdin);
    if (nome [strlen (nome) - 1] != '\n')
    {
      printf ("Comprimento do nome muito longo\n");
      do
      {
        fgets (nome, COMPRIMENTO_MAXIMO_NOME + 2, stdin);
      } while (nome [strlen (nome) - 1] != '\n');
    }
    else
    {
      nome [strlen (nome) - 1] = '\0';
      comprimento = strlen (nome);
      for (indice = 0; indice < comprimento; indice++)
        auxiliar [indice] = toupper (nome [indice]);
      auxiliar [indice] = '\0';

      if (strcmp (auxiliar, "FIM"))
      {
        if (linhas)
          fprintf (arquivo, "\n%s", nome);
        else /* if (!linhas) */
          fprintf (arquivo, "%s", nome);
        linhas++;
      }
    }
  }
  while (strcmp (auxiliar, "FIM"));

  fclose (arquivo);

  printf ("%i linhas escritas no arquivo\n", linhas);
  return OK;
}

/* $RCSfile$ */


