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
#include <math.h>

float
CalcularSerieHarmonicaAlternada(unsigned long int numero)
{
 if(numero == 0)
 {
  return 0;
 }
 if((numero % 2)==0)
 {
 	return (-1/(pow((double)numero,(double)numero)) + CalcularSerieHarmonicaAlternada(numero-1));
 }
 else
 {
  return (1/(pow((double)numero,(double)numero)) + CalcularSerieHarmonicaAlternada(numero-1));
 }  
}

/*$RCSfile$*/
