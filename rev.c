#include <stdio.h>
#include "strrev.h"
#include <stdlib.h>

#define MAX 1
#define QTD_INVALIDA 2
#define OK 0

int
main(int argc, char *argv[])
{
 char *stn;
 int indice,tamanho;
 if(argc != QTD_INVALIDA)
 {
  printf("Quantidade invalida de argumentos!!! Apenas um unico argumento eh permitido");
  exit(QTD_INVALIDA);
 }
 else
 {
  for(tamanho=0; *(argv[1] + tamanho) != "\0";tamanho++);
  stn=func(argv[1]);
  for(indice=0;indice<tamanho ;indice++)
  {
	printf("\n O valor de stn na posicao %d eh %d",indice, *(stn + indice));
  }
 }
 return OK;
}
