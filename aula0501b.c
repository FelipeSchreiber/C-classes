/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor:Felipe Schreiber Fernandes 

$Author$
$Date$
$Log$
* 
*/

#include "aula0501.h"
#include <stdio.h>
#include <stdlib.h>
#include "aula0401.h"

float
CalcularSerieHarmonicaAlternada(unsigned long int numero)
{
 float resultado =0;
 do
 {
  if(numero == 0)
  {
   return 0;
  }
  if((numero % 2)==0)
  {
   resultado -= 1/(CalcularExponencial((double)numero,(int)numero)); 
   numero--;
  }
  else
  {
   resultado += 1/(CalcularExponencial(numero,numero));
   numero--;
  }
 }
 while(numero > 0);  
 return resultado;
}

/*$RCSfile$*/
