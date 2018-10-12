/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor:Felipe Schreiber Fernandes 

$Author$
$Date$
$Log$ 
*/

#include <stdio.h>
#include "aula0201.h"

ull
CalcularMaximoDivisorComum(ull numerador,ull denominador)
{
 if(numerador == 0 && denominador != 0)
 {
  return denominador;
 }
 if (denominador == 0 && numerador != 0)
 {
  return numerador;
 }
 if (numerador == 0 && denominador == 0)
 { 
  return 0;
 }
 else
 {
  if((numerador%denominador) == 0)
  {
   return denominador;
  }
  else  
   return CalcularMaximoDivisorComum(denominador,(numerador%denominador)); 
 } 
}

/*$RCSfile*/

