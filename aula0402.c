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
#include "aula0401.h"

#define OK 0
#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_PARAMETROS_VALIDOS 3 
#define ARGUMENTO_INVALIDO 2

#define EOS '\0'


int 
main(int argc,char *argv[])
{
 char *validacao;
 double base;
 int expoente;
 
 if(argc != NUMERO_DE_PARAMETROS_VALIDOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  return (NUMERO_DE_PARAMETROS_INVALIDOS);  
 }
 else 
 {
  base =(double)strtod(argv[1],&validacao);
  if(*validacao != EOS)
  {
    printf("\n\nCaractere invalido\n\n");
    exit(ARGUMENTO_INVALIDO); 
  }
  expoente =(int)strtod(argv[2],&validacao);
  if(*validacao != EOS)
  {
    printf("\n\nCaractere invalido\n\n");
    exit(ARGUMENTO_INVALIDO); 
  }
  printf("\n\nO valor da expoencial eh %Lf\n\n",CalcularExponencial(base,expoente));
 }
 return OK;
}
/*RCSfile*/
