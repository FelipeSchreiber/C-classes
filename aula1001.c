/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor:Felipe Schreiber Fernandes

$Author$
$Date$
$Log$

*/

#define _XOPEN_SOURCE  500
#define _ISOC99_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <unistd.h>

#define OK                              0
#define NUMERO_ARGUMENTOS_INVALIDO      1
#define NUMERO_ARGUMENTOS               2
#define ERRO_ABRINDO_ARQUIVO            3
#define ERRO_LENDO_ARQUIVO              4
#define ERRO_ESCREVENDO_ARQUIVO         5
#define NOME_INVALIDO					    6
#define ERRO_CRIANDO_ARQUIVO				 7	
#define COMPRIMENTO_NOME					 1020	
#define COMPRIMENTO_BUFFER              1024

int
main (int argc, char *argv[])
{
 char buffer [COMPRIMENTO_BUFFER],extensao[] = ".bak",nome[COMPRIMENTO_NOME];
 int fileDescriptor;
 char template[] = "temporary-XXXXXX";
 FILE *leitura;
 FILE *escrita;
 
 memset(nome,'\0',sizeof(nome));
 strcpy(nome,argv[1]);
 if (argc != NUMERO_ARGUMENTOS)
 {
   printf ("\n\n Numero de argumentos invalido");
   exit (NUMERO_ARGUMENTOS_INVALIDO);
 }

 if(strlen(argv[1]) > COMPRIMENTO_NOME)
 {
  printf("\n\nNome do arquivo de entrada excede %u caracteres\n\n",COMPRIMENTO_NOME);
  exit(NOME_INVALIDO);
 }

 if (!(leitura = fopen (argv [1], "r")))
 {
  printf ("Erro abrindo o arquivo: \"%s\"\n", argv [1]);
  printf ("Erro (#%i): %s\n", errno, strerror (errno));
  exit (ERRO_ABRINDO_ARQUIVO);
 }

 fileDescriptor = mkstemp(template);
  
 if(fileDescriptor == -1)
 {
  printf("\n\n Um erro ocorreu ao criar o arquivo temporario\n\n");
  printf("\n\n Codigo de erro gerado : %i \"%s\"\n\n",errno,strerror(errno));
  unlink(template);
  fclose(leitura);
  exit(ERRO_CRIANDO_ARQUIVO);
 }

 escrita = fdopen(fileDescriptor,"w");
 
 if(escrita == NULL)
 {
  printf("\n\n Um erro ocorreu ao abrir o arquivo temporario\n\n");
  printf("\n\n Codigo de erro gerado : %i \"%s\"\n\n",errno,strerror(errno));
  fclose(escrita);
  exit(ERRO_ABRINDO_ARQUIVO);
 }
  
 while(fgets(buffer,COMPRIMENTO_BUFFER + 1,leitura))
 {
  #ifdef _MY_DEBUG
   printf("\n\nArmazenado no buffer: %s",buffer); 
  #endif
  if((buffer[strlen(buffer) - 1]) =='\n')
  {
   if((buffer[strlen(buffer) - 2]) =='\r')
   {
    buffer[strlen(buffer) -2] = '\0';
	}
  
   if((buffer[strlen(buffer) - 1]) =='\n')
   {
    buffer[strlen(buffer) -1] = '\0';
   }
   fprintf(escrita,"%s\r\n",buffer);
  }
  else
   fprintf(escrita,"%s",buffer); 
  memset(buffer,0,sizeof(buffer));
 }
 
 if (ferror (leitura))
 {
  printf("Erro lendo arquivo: \"%s\"\n", argv [1]);
  printf("Erro (#%i): %s\n", errno, strerror (errno));
  fclose(leitura);
  fclose(escrita);
  remove(template);
  exit(ERRO_LENDO_ARQUIVO);
 }

 if (ferror (escrita))
 {
  printf ("Erro escrevendo no arquivo: \"%s\"\n",template);
  printf ("Erro (#%i): %s\n", errno, strerror (errno));
  fclose (leitura);
  fclose (escrita);
  remove (template);
  exit (ERRO_ESCREVENDO_ARQUIVO);
 }
 
 snprintf(&argv[1][strlen(argv[1])],sizeof(extensao),"%s",extensao);
 #ifdef _MY_DEBUG
  printf("\n\n%s --> %s\n\n",nome,argv[1]); 
 #endif
 rename(nome,argv[1]);
 #ifdef _MY_DEBUG
  printf("\n\n%s --> %s\n\n",template,nome); 
 #endif
 rename(template, nome);
 
 fclose (leitura);
 fclose (escrita);
 printf ("\n\nArquivo passado para formato windows com sucesso!\n\n");
 return OK;
}
/* $RCSfile$ */
