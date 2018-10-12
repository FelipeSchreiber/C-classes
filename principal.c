#include <stdio.h>
#include "link.h"

int
main()
{
 int base,expoente;
 printf("Digite a base\n");
 fscanf(stdin,"%i",&base);
 printf("Digite o expoente\n");
 fscanf(stdin,"%i",&expoente);
 printf("O resultado e: %i",exponencial(base,expoente));
 return 0;
}
