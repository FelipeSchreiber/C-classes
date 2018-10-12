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
#define NUMERO_DE_ARGUMENTOS 12 
#define EOS '\0'


int 
main(int argc,char *argv[])
{
 char pisPasep[12];
 unsigned indice;
 
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

 for(indice = 1; indice < 11;indice++)
 {
  pisPasep[indice - 1] = *argv[indice];
 }
 pisPasep[10] = '-';
 pisPasep[11] = *argv[indice];
 
 printf("\n\nO digito verificador eh  %s\n\n",ValidarPisPasep(pisPasep)?"valido":"invalido");

 return OK;
}
/*RCSfile*/
