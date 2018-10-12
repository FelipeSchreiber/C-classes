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
#include "aula0801.h"
#include <string.h>

#define OK 0
#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_ARGUMENTOS 11 
#define EOS '\0'


int 
main(int argc,char *argv[])
{
 char *validacao = NULL;
 byte pisPasep[10];
 unsigned indice,digitoVerificador;

 if(argc != NUMERO_DE_ARGUMENTOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  exit (NUMERO_DE_PARAMETROS_INVALIDOS);  
 }

 for(indice = 1; indice < NUMERO_DE_ARGUMENTOS;indice++)
 {
  if(argv[indice][0] == '-' || (strlen(argv[indice]) != 1))
  {
   printf("\n\nArgumento \"%s\" invalido\n\n",argv[indice]);
   exit(ARGUMENTO_INVALIDO);
  }
 }

 for(indice = 1; indice < argc;indice++)
 {
  pisPasep[indice - 1] = (byte) strtoull(argv[indice],&validacao,10);
  if(*validacao != EOS)
  {
   printf("\n\nArgumento \"%u\" invalido\n\n",*validacao);
   exit(ARGUMENTO_INVALIDO);
  }
 }

 digitoVerificador = GerarDigitoVerificadorPisPasep(pisPasep);
 
 if(digitoVerificador > 9)
 {
  printf("\n\nA funcao GerarDigitoVerificador devolveu o codigo de erro \"%u\"\n\n", digitoVerificador);
  exit(ARGUMENTO_INVALIDO);
 }

 printf("\n\nO digito verificador correspondente eh : %u\n\n",digitoVerificador);

 return OK;
}
/*RCSfile*/
