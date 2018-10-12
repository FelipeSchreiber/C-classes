/*
UNIVERSIDADE FEDERAL DO RIO DE JANEIRO
ESCOLA POLITECNICA
DEPARTAMENTO DE ELETRONICA E DE COMPUTACAO
PROFESSOR: MARCELO LANZA
AUTOR: FELIPE SCHREIBER FERNANDES

$Author$
$Date$
$Log$

*/

#include <stdio.h>
#include "aula0301.h"
#include <stdlib.h>

#define OK 0
#define EOS '\0'
#define CARACTERE_INVALIDO 1
#define NUMERO_DE_ARGUMENTOS_VALIDO 2
#define NUMERO_DE_ARGUMENTOS_INVALIDO 3

int 
main(int argc,char *argv[])
{
 int contador=0;
 if(argc != NUMERO_DE_ARGUMENTOS_VALIDO)
 {
  printf("Numero de argumentos invalido");
  exit(NUMERO_DE_ARGUMENTOS_INVALIDO);
 }
 else
 {
  for(contador=0; argv[1][contador] != EOS; contador++)
  {
   if(argv[1][contador] < '0' || argv[1][contador] > '9')
   {
    printf("Ha caracter(es) invalido(s) no argumento.Apenas numeros sao permitidos");
    exit(CARACTERE_INVALIDO);
   }
  }
 } 
 int limite = (atoi(argv[1]));
 for(contador=0;contador <= limite; contador++)
 {
  printf("\n\nO valor de F(%d) eh %llu\n\n",contador,CalcularTermoSerieFibonacci(contador));
 }
 return OK ;
}

/*RCSfile*/
