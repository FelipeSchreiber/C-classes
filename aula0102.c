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
  printf("Tipos Basicos\n\n");
  printf("Char:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(char),(sizeof(char)>1)?"bytes":"byte");
  printf("Int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(int),(sizeof(int)>1)?"bytes":"byte");
  printf("Float:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(float),(sizeof(float)>1)?"bytes":"byte");
  printf("Double:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(double),(sizeof(double)>1)?"bytes":"byte");
  printf("Void:\n");
  printf("\t\t%lu%s\n\n\n",(unsigned long)sizeof(void),(sizeof(void)>1)?"bytes":"byte");
  printf("Modificadores de Sinal\n\n"); 
  printf("Signed:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(signed),(sizeof(signed)>1)?"bytes":"byte");
  printf("Unsigned:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(unsigned),(sizeof(unsigned)>1)?"bytes":"byte");
  
  return OK;
}

/* $RCSfiles$ */
