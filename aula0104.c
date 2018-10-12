/*
$Author: felipe $
$Date: 2017/03/18 02:24:06 $
$Log: aula0101.c,v $
Revision 1.1  2017/03/18 02:24:06  felipe
Initial revision

*/

#include <stdio.h>
#include <stdlib.h>
#define OK  0

int
main ()
{
  printf("\n\nTipos Basicos\n\n");
  printf("Char:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(char),(sizeof(char)>1)?"bytes":"byte");
  printf("Int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(int),(sizeof(int)>1)?"bytes":"byte");
  printf("Float:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(float),(sizeof(float)>1)?"bytes":"byte");
  printf("Double:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(double),(sizeof(double)>1)?"bytes":"byte");
  printf("Void:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(void),(sizeof(void)>1)?"bytes":"byte");
 
  printf("\n\nModificadores de Sinal\n\n"); 
  printf("Signed:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(signed),(sizeof(signed)>1)?"bytes":"byte");
  printf("Unsigned:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(unsigned),(sizeof(unsigned)>1)?"bytes":"byte");
 
  printf("\n\nModificadores de Largura\n\n"); 
  printf("Short:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(short),(sizeof(short)>1)?"bytes":"byte");
  printf("Long:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long int),(sizeof(long)>1)?"bytes":"byte");
  printf("Long long:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(long long int),(sizeof(long long)>1)?"bytes":"byte");

  printf("\n\nModificadores de Sinal combinados com Modificadores de Largura\n\n"); 
  printf("Short Signed :\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(short signed),(sizeof(short signed)>1)?"bytes":"byte");
  printf("Short Unsigned:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(short unsigned),(sizeof(short unsigned)>1)?"bytes":"byte");
  printf("Long Signed:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long signed),(sizeof(long signed)>1)?"bytes":"byte");
  printf("Long Unsigned:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long unsigned),(sizeof(long unsigned)>1)?"bytes":"byte");
  printf("Long Long Signed:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long long signed),(sizeof(long long signed)>1)?"bytes":"byte");
  printf("Long Long Unsigned:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(long long unsigned),(sizeof(long long unsigned)>1)?"bytes":"byte");
  
  return OK;
}

/* $RCSfiles$ */
