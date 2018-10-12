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
#include "aula0501.h"
#include "aula0401.h"

#define OK 0
#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_PARAMETROS_VALIDOS 2 
#define ARGUMENTO_INVALIDO 3

#define EOS '\0'


int 
main(int argc,char *argv[])
{
 char *validacao=NULL;
 unsigned long numero=0; 

 if(argc != NUMERO_DE_PARAMETROS_VALIDOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  return (NUMERO_DE_PARAMETROS_INVALIDOS);  
 }
 if(argv[1][0] == '-')
 {
  printf("\n\nNao eh permitido a entrada de numeros negativos\n\n");
  exit(ARGUMENTO_INVALIDO);
 }
 else 
 {
  numero =(unsigned long)strtod(argv[1],&validacao);
  if(*validacao != EOS)
  {
    printf("\n\nCaractere invalido\n\n");
    exit(ARGUMENTO_INVALIDO); 
  }
  printf("\n\nO valor da serie eh %f\n\n",CalcularSerieHarmonicaAlternada(numero));
 }
 return OK;
}
/*RCSfile*/
