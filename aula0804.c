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

*/

#include <stdio.h>
#include "aula0804.h"

byte
GerarDigitoVerificadorPisPasep (char * argPisPasep)
{
 unsigned int indice,soma,digitoVerificador,numero[11]; 
 byte pesos[10]={3,2,9,8,7,6,5,4,3,2};
 soma = 0;
 
 for(indice = 0; indice < 10; indice++)
 {
  numero[indice] = 0;
  if( argPisPasep[indice] < '0' || argPisPasep[indice] > '9')
  {
   printf("\n\nArgumento \"%c\" invalido",argPisPasep[indice]);
   return(ARGUMENTO_INVALIDO);
  }
  numero[indice]=(byte)(argPisPasep[indice] - '0');
 }

 numero[10] = (byte)(argPisPasep[11] - '0');	 

 for(indice = 0;indice < 10;indice++)
 {
  if(numero[indice] > 9)
  {
   printf("Argumento \"%u\" invalido",numero[indice]);
   return(ARGUMENTO_INVALIDO);
  }
 
  soma += numero[indice] * pesos[indice];
 }

 if((soma % 11) == 0 || (soma % 11) == 1)
 {
  digitoVerificador = 0; 
 }
 else
 {
  digitoVerificador = 11 - (soma % 11); 
 }
 return digitoVerificador;
}

boolean
ValidarPisPasep (char * argPisPasep)
{
 unsigned digitoVerificador = GerarDigitoVerificadorPisPasep (argPisPasep); 
 
 if(digitoVerificador > 9)
 {
  printf("\n\nA funcao ValidarPisPasep retornou o codigo de erro \"%u\"\n\n", digitoVerificador);
  return(falso);
 }
  
 if(argPisPasep[11] != digitoVerificador + '0')
  return falso;
 return verdadeiro;
}

/*RCSfile*/
