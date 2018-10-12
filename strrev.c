#include <stdio.h>
#include "strrev.h"

char*
func(char *stg[])
{
 int tamanho=0;
 tamanho=((sizeof(stg)/sizeof(char))-1);
 static char reversa[tamanho];
 for(;tamanho>=0;tamanho--)
 {
  int posicao=0;	
  reversa[posicao]= stg[tamanho-1]; 
  posicao--;
 }
 return reversa;
}
