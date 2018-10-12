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
#include "aula0801.h"

byte
GerarDigitoVerificadorPisPasep (byte numero[10])
{
 unsigned int indice,soma,digitoVerificador; 
 byte pesos[10]={3,2,9,8,7,6,5,4,3,2};
 soma = 0;
 
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
ValidarPisPasep (byte numero[11])
{
 unsigned digitoVerificador = GerarDigitoVerificadorPisPasep (numero); 
 
 if(digitoVerificador > 9)
 {
  printf("\n\nA funcao ValidarPisPasep retornou o codigo de erro \"%u\"\n\n", digitoVerificador);
  return(ARGUMENTO_INVALIDO);
 }
 
 if(numero[10] > 9)
 {
   printf("Argumento \"%u\" invalido",numero[10]);
   return(ARGUMENTO_INVALIDO);
 }
 if(numero[10] != digitoVerificador)
  return falso;
 return verdadeiro;
}

/*RCSfile*/
