/*Universidade Federal do Rio de Janeiro
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
#include "aula0804.h"
#include <string.h>

#define OK 0
#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_ARGUMENTOS 2 


int 
main(int argc,char *argv[])
{
 unsigned digitoVerificador;

 if(argc != NUMERO_DE_ARGUMENTOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  exit (NUMERO_DE_PARAMETROS_INVALIDOS);  
 }

 if(argv[1][0] == '-' )
 {
   printf("\n\nNao eh permitida a entrada com numeros negativos\n\n");
   exit(ARGUMENTO_INVALIDO);
 }

 if(strlen(argv[1]) != (10))
 {
  printf("\n\n O numero deve conter 10 algarismos\n\n");
  exit(ARGUMENTO_INVALIDO);
 }
 
 digitoVerificador = GerarDigitoVerificadorPisPasep(argv[1]);
 
 if(digitoVerificador > 9)
 {
  printf("\n\nA funcao GerarDigitoVerificador devolveu o codigo de erro \"%u\"\n\n", digitoVerificador);
  exit(ARGUMENTO_INVALIDO);
 }

 printf("\n\nO digito verificador correspondente eh : %u\n\n",digitoVerificador);

 return OK;
}
/*RCSfile*/
