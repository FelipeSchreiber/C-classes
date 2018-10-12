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
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long),(sizeof(long)>1)?"bytes":"byte");
  printf("Long long:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(long long),(sizeof(long long)>1)?"bytes":"byte");

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
  
  printf("\n\nTipos Basicos combinados com Modificadores de Sinal\n\n");
  printf("Unsigned Char:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(unsigned char),(sizeof(unsigned char)>1)?"bytes":"byte");
  printf("Unsigned Int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(unsigned int),(sizeof(unsigned int)>1)?"bytes":"byte");
  printf("Signed Char:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(signed char),(sizeof(signed char)>1)?"bytes":"byte");
  printf("Signed Int:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(signed int),(sizeof(signed int)>1)?"bytes":"byte");
 
  printf("\n\nTipos Básicos combinados com Modificadores de Largura\n\n"); 
  printf("Short int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(short int),(sizeof(short int)>1)?"bytes":"byte");
  printf("Long int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long int),(sizeof(long int)>1)?"bytes":"byte");
  printf("Long long int:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(long long int),(sizeof(long long int)>1)?"bytes":"byte");
  printf("Long double:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(long double),(sizeof(long double)>1)?"bytes":"byte");
  
  printf("\n\nTipos Básicos combinados com Modificadores de Largura e de Sinal\n\n");
  printf("Short Signed int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(short signed int),(sizeof(short signed int)>1)?"bytes":"byte");
  printf("Short Unsigned int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(short unsigned int),(sizeof(short unsigned int)>1)?"bytes":"byte");
  printf("Long Signed int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long signed int),(sizeof(long signed int)>1)?"bytes":"byte");
  printf("Long Unsigned int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long unsigned int),(sizeof(long unsigned int)>1)?"bytes":"byte");
  printf("Long Long Signed int:\n");
  printf("\t\t%lu%s\n",(unsigned long)sizeof(long long signed int),(sizeof(long long signed int)>1)?"bytes":"byte");
  printf("Long Long Unsigned int:\n");
  printf("\t\t%lu%s\n\n",(unsigned long)sizeof(long long unsigned int),(sizeof(long long unsigned int)>1)?"bytes":"byte");
  
  printf("\n\nCombinacoes Invalidas:\n\n\n");
  printf("Long long double\n\n");
  printf("Short void\n\n");
  printf("Long void\n\n");
  printf("Long long void\n\n");
  printf("Unsigned Double\n\n");
  printf("Unsigned Float\n\n");
  printf("Unsigned Void\n\n");
  printf("Signed Float\n\n");
  printf("Signed Double\n\n");
  printf("Signed Void\n\n");
  printf("Short char\n\n");
  printf("Long char\n\n");
  printf("Long long char\n\n");
  printf("Short float\n\n");
  printf("Long float\n\n");
  printf("Long long float\n\n");
  printf("Short double\n\n");
  printf("Short int\n\n");
  printf("Short Signed char\n\n");
  printf("Short Unsigned char\n\n");
  printf("Long Signed char\n\n");
  printf("Long Unsigned char\n\n");
  printf("Long Long Signed char\n\n");
  printf("Long Long Unsigned char\n\n");
  printf("Short Signed double\n\n");
  printf("Short Unsigned double\n\n");
  printf("Long Signed double\n\n");
  printf("Long Unsigned double\n\n");
  printf("Long Long Signed double\n\n");
  printf("Long Long Unsigned double\n\n");
  printf("Short Signed float\n\n");
  printf("Short Unsigned float\n\n");
  printf("Long Signed float\n\n");
  printf("Long Unsigned float\n\n");
  printf("Long Long Signed float\n\n");
  printf("Long Long Unsigned float\n\n");
  printf("Short Signed void\n\n");
  printf("Short Unsigned void\n\n");
  printf("Long Signed void\n\n");
  printf("Long Unsigned void\n\n");
  printf("Long Long Signed void\n\n");
  printf("Long Long Unsigned void\n\n");
    
  return OK;
}

/* $RCSfiles$ */
