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
#include <stdlib.h>
#include "aula0701.h"

void
MultiplicarMatrizes (float matriz1[NUMERO_MAXIMO_LINHAS1][NUMERO_MAXIMO_COLUNAS1], float matriz2[NUMERO_MAXIMO_LINHAS2][NUMERO_MAXIMO_COLUNAS2 ], float matrizResultado[NUMERO_MAXIMO_LINHAS1][NUMERO_MAXIMO_COLUNAS2])
{
 unsigned linha1,coluna1,linha2,coluna2;
 for(linha1 = 0;linha1 < NUMERO_MAXIMO_LINHAS1;linha1++)
 {
  for(coluna2 = 0;coluna2 < NUMERO_MAXIMO_COLUNAS2;coluna2++)
  {
   matrizResultado[linha1][coluna2] = 0;
   for(coluna1 = 0;coluna1 < NUMERO_MAXIMO_COLUNAS1;coluna1++)
   {
    matrizResultado[linha1][coluna2] += matriz1[linha1][coluna1]*matriz2[linha2][coluna2];
    linha2++;   
   }
   linha2 = 0;
  }
 }
}

/*RCSfile*/
