/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Schreiber Fernandes

$Author$
$Date$
$Log$

*/

#include <string.h>
#include <stdio.h>
#include "aula0901.h"


tipoErros
CodificarBase64(byte *entrada, unsigned numeroBytes, char *saida)
{
 unsigned contador,limite,quebras;
 char temporario[TAMANHO_MAXIMO_BYTES];
 quebras = 0; 
 /*limite eh o maior numero multiplo de 3 que faz parte da sequencia 0,1,2...numeroBytes*/
 limite = (numeroBytes - (numeroBytes % 3));
 for(contador = 0; contador < limite/3 ; contador++)
 {
  saida[4*contador] = CONJUNTO_BASE_64[((entrada[3*contador]>>2) & 0x3F)];
  saida[4*contador + 1] = CONJUNTO_BASE_64[((entrada[3*contador] << 4) & 0x30) | ((entrada[3*contador + 1] >> 4) & 0x0F)];
  saida[4*contador + 2] = CONJUNTO_BASE_64[((entrada[3*contador + 1] << 2) & 0x3C) | ((entrada[3*contador +2] >>6) & 0x03)]; 
  saida[4*contador + 3] = CONJUNTO_BASE_64[(entrada[3*contador + 2] & 0x3F)]; 
 } 	

 if((numeroBytes % 3) == 1)
 {
  saida[(numeroBytes/3)*4] = CONJUNTO_BASE_64[((entrada[limite] >>2) & 0x3F)];
  saida[((numeroBytes/3)*4 + 1)]= CONJUNTO_BASE_64[((entrada[limite] << 4) & 0x30)];
  saida[((numeroBytes/3)*4 + 2)]= '=';
  saida[((numeroBytes/3)*4 + 3)]= '=';
 }
  
 if((numeroBytes % 3) == 2)
 {
  saida[(numeroBytes/3)*4] = CONJUNTO_BASE_64[((entrada[limite] >>2) & 0x3F)];
  saida[((numeroBytes/3)*4 + 1)]= CONJUNTO_BASE_64[((entrada[limite] << 4) & 0x30) | ((entrada[limite + 1] >> 4) & 0x0F)];
  saida[((numeroBytes/3)*4 + 2)]= CONJUNTO_BASE_64[((entrada[limite + 1] << 2) & 0x3C)];
  saida[((numeroBytes/3)*4 + 3)]= '=';
 }

 if(strlen(saida) >= 76)
  for(contador = 76; contador < strlen(saida); contador += 76)
  {
   strncpy(temporario,saida,contador + 2*quebras);
   temporario[contador + 2*quebras] = '\r';
   temporario[contador + 1 + 2*quebras] = '\n';
   quebras++;
   strcat(temporario,&saida[contador]);
   strcpy(saida,temporario);
  }

 saida[strlen(saida) -1 ] = '\0';
 return OK;
}

/**/tipoErros
DecodificarBase64(char *entrada,byte *saida,unsigned *numeroBytes)
{
 unsigned contador,limite,indice;
 for(limite = 0;((limite < strlen(entrada)) && (entrada[limite] != '='));limite++);
  
 for(contador = 0; contador < limite;contador++)
 {
  if((entrada[contador] == '\r'))
  {
   memmove((entrada + contador),(entrada + contador + 2), (strlen(entrada) - (contador +2)));
   /*remove todos os '\r' e '\n' */
  }
 } 
 
 for(contador = 0; contador < limite;contador++)
 {
  indice = 0;
  while((entrada[contador] != CONJUNTO_BASE_64[indice]) && (indice < 63))
  {
   indice++;
   if((indice == 63) && (entrada[contador] != CONJUNTO_BASE_64[indice]) && (entrada[contador] != '='))
   {
    printf("\n\n Caractere \" %c \" nao faz parte da base64, impossivel de decodificar\n\n",entrada[contador]);
    return (ARGUMENTO_INVALIDO);
   }
  }
  entrada[contador] = indice;/*conversao para ASCII a partir do numero correspondente a determinado caractere da base 64*/
 }

 for(contador = 0; contador < limite/4;contador++)
 {
  saida[3*contador] = (byte)((entrada[4*contador] << 2) & 0xFC) | ((entrada[4*contador + 1] >> 4) & 0x03);
  saida[3*contador + 1] = (byte)((entrada[4*contador + 1] << 4) & 0xF0) | ((entrada[4*contador + 2] >> 2) & 0x0F);
  saida[3*contador + 2] = (byte)((entrada[4*contador + 2] << 6) & 0xC0) | ((entrada[4*contador + 3]) & 0x3F);
  *numeroBytes += 3;
 }

 return OK;
}
/*$RCS$*/
