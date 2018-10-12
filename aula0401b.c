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

#include "aula0401.h"
#include <stdio.h>
#include <stdlib.h>
#define  INFINITO 1.0/0.0

long double
CalcularExponencial(double base, int expoente)
{
 long double resultado=1;
 do
 { 
  if(expoente == 0)
  {
   return 1;
  }
  if(base == 0) 
  {
     if(expoente > 0) 
     {
      return 0.0;
     }
     else
     {
      printf("\n\nExpoente negativo com base 0: resultado eh infinito\n\n");
      return (INFINITO);
     }
  }
  if(expoente<0)
  {
    resultado *= (1.0/base);
    expoente++;  
  }
  else
  {
   resultado *= base;
   expoente--;
  }
 }
 while(expoente != 0);
 return resultado;
}

/*$RCSfile$*/
