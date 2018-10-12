/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Schreiber Fernandes

$Author$
$Date$
$Log$
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0701.h"

#define OK 0
#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_ARGUMENTOS  NUMERO_MAXIMO_LINHAS1*NUMERO_MAXIMO_COLUNAS1 + (NUMERO_MAXIMO_LINHAS2*NUMERO_MAXIMO_COLUNAS2) + 1
#define ARGUMENTO_INVALIDO 3
#define EOS '\0'


int 
main(int argc,char *argv[])
{
 char *validacao = NULL;
 float
 matriz1[NUMERO_MAXIMO_LINHAS1][NUMERO_MAXIMO_COLUNAS1],
 matriz2[NUMERO_MAXIMO_LINHAS2][NUMERO_MAXIMO_COLUNAS2],
 matrizResultado[NUMERO_MAXIMO_LINHAS1][NUMERO_MAXIMO_COLUNAS2];
 unsigned linha,coluna; 

 if(argc != NUMERO_DE_ARGUMENTOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  exit (NUMERO_DE_PARAMETROS_INVALIDOS);  
 }
 
 if(NUMERO_MAXIMO_COLUNAS1 != NUMERO_MAXIMO_LINHAS2) 
 {
  printf("Impossivel realizar a multiplicacao de matrizes");
  exit(INCOMPATIVEL);
 }

 for (linha = 0; linha < NUMERO_MAXIMO_LINHAS1; linha++)
  for (coluna = 0; coluna < NUMERO_MAXIMO_COLUNAS1; coluna++)
  {
   matriz1 [linha][coluna] = 
   strtof (argv [linha *NUMERO_MAXIMO_COLUNAS1 + coluna + 1], &validacao);
 
   printf("\n\n %s \n\n",argv[linha *NUMERO_MAXIMO_COLUNAS1 + coluna + 1]);
   printf("\n\n %f \n\n",matriz1[linha][coluna]);
  
   if (*validacao != EOS)
   {
    printf ("\n\nCaractere invalido  \"%c\"\n",*validacao);
    exit (ARGUMENTO_INVALIDO);
   }
  }
 
 for (linha = 0; linha < NUMERO_MAXIMO_LINHAS2; linha++)
  for (coluna = 0; coluna < NUMERO_MAXIMO_COLUNAS2; coluna++)
  {
   matriz2 [linha][coluna] = 
   strtof (argv [linha * NUMERO_MAXIMO_COLUNAS2 + coluna + 1 + NUMERO_MAXIMO_LINHAS1 *NUMERO_MAXIMO_COLUNAS1], &validacao);
   
   printf("\n\n %s \n\n",argv[linha *NUMERO_MAXIMO_COLUNAS2 + coluna + 1 + NUMERO_MAXIMO_LINHAS1 *NUMERO_MAXIMO_COLUNAS1]);
   printf("\n\n %f \n\n",matriz2[linha][coluna]);
   
   if (*validacao != EOS)
   {
    printf ("\n\nCaractere invalido\"%c\"\n",*validacao);
    exit (ARGUMENTO_INVALIDO);
   }
  }
 printf("\n\nTUDO OK\n\n");  
 MultiplicarMatrizes (matriz1,matriz2,matrizResultado);
 for(linha = 0; linha < NUMERO_MAXIMO_LINHAS1; linha++)
 {
  for(coluna = 0; coluna < NUMERO_MAXIMO_COLUNAS2; coluna++)
   printf(" %f ",matrizResultado[linha][coluna]);
  printf("\n");
 } 
 return OK;
}
/*RCSfile*/
