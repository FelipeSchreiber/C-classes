/*
 *Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Schreiber Fernandes

$Author: felipe.schreiber $
$Date: 2017/03/30 14:06:22 $
$Log: aula0301a.c,v $
Revision 1.1  2017/03/30 14:06:22  felipe.schreiber
Initial revision
 
*
*/

#include "aula0301.h"
 
ull
CalcularTermoSerieFibonacci(unsigned short termo)
{
 if(termo <= 1)
 {
  return termo;
 } 
 else
 {
  return (CalcularTermoSerieFibonacci(termo - 1) + CalcularTermoSerieFibonacci(termo - 2));
 } 
}

/*$RCSfile: aula0301a.c,v $*/
