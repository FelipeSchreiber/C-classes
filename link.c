#include "link.h"

int
exponencial(int base,int expoente)
{
 int resultado,i;
 resultado=1;
 for(i=0;i<expoente;i++)
 {
	resultado *= base;
 }
return resultado;
}
