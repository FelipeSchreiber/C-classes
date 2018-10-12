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
#include "aula0301.h"

ull
CalcularTermoSerieFibonacci(unsigned short numero)
{
 if(numero == 0)
 {
  return 0;
 }
 else
 {
  int valorA,soma;
  ull valorB;

  valorA=1;
  valorB=0;
  soma=0;
 
  do
  { 
   soma=valorA + valorB;
   valorA = valorB;
   valorB=soma;
   numero--;
   }
   while(numero>0);
  return valorB;
 }
}

/*RCSfile*/
