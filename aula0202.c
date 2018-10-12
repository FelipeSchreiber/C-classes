/* Universidade Federal do Rio de Janeiro
 * Escola Politecnica
 * Departamento de Eletronica e de Computacao
 * EEL270 - Computacao II - Turma 2017/1
 * Prof. Marcelo Luiz Drumond Lanza
 * Autor: Felipe Schreiber Fernandes
 *
 * $Author$
 * $Date$
 * $Log$
 *
 *
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "aula0201.h"

#define OK  0
#define ERROR 1
#define EOS '\0'

int
main (int argc,char *argv[ ])
{
  ull numerador,denominador,resultado;
  unsigned linha, coluna;

  if (argc != 3)
  {
    printf ("Quantidade invalida de argumentos");
    return (ERROR);
  }
 
 for(linha = 1;linha<2;linha++)
  { 
    for (coluna = 0;argv[1][coluna] != EOS; coluna++)
      if (argv [1][coluna] < '0' || argv [1][coluna] > '9')
      {
        printf ("Entrada contem caractere invalido \n");
        return (ERROR);
      }
  }

 	numerador = atoi (argv[1]);
   denominador = atoi (argv[2]);
   resultado = CalcularMaximoDivisorComum(numerador,denominador);
	
	printf("\nO Maior Divisor Comum entre %llu e %llu eh %llu\n",numerador, denominador,resultado);

	return OK;
}  
/*$RCSfile$*/
  

  
	
  
