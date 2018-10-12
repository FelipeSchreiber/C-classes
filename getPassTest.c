#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define COMPRIMENTO_SENHA 127
#define NUMERO_ARGUMENTOS 1
#define NUMERO_ARGUMENTOS_INVALIDO

int main(int argc , char *argv[] )
{
  printf("\n\n%u\n\n",'0');
  printf("\n\n%c\n\n",48);
 static char senha[40];
 static char validacao[40];
 char *ptr;
 ptr = getpass("Digite a senha");
 strcpy(senha,ptr);
 printf("\n\nA senha eh: %s\n\n",senha);
 
 ptr = getpass("\n\nConfirme a senha\n\n");
 strcpy(validacao,ptr);

 if(strcmp(senha,validacao))
 printf("\n\nA senha e validacao incompativeis\n\n");
 
 printf("\n\nA senha eh: %s\n\n",senha);
 printf("\n\nA validacao  eh: %s\n\n",validacao);
return 0;
}
