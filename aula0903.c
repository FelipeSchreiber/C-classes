/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Schreiber Fernandes

$Author$
$Date$
$Log$
*
*/

#include <stdio.h>
#include <stdlib.h>
#include "aula0901.h"
#include <string.h>

#define OK 0
#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_ARGUMENTOS 2 
#define EOS '\0'

int 
main(int argc,char *argv[])
{
 unsigned contador,tamanho = 0;

 byte decodificado[TAMANHO_MAXIMO_CHAR];

 if(argc != NUMERO_DE_ARGUMENTOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  exit (NUMERO_DE_PARAMETROS_INVALIDOS);  
 }

 if(argv[1][0] == EOS )
 {
   printf("\n\nString nula\n\n");
   exit(ARGUMENTO_INVALIDO);
 }

 if(strlen(argv[1]) > 1051)
 {
  printf("\n\n A string deve conter no maximo 1051 caracteres incluindo a quebra de linha\"\r\n\"\n\n");
  exit(ARGUMENTO_INVALIDO);
 }
 
 if(DecodificarBase64(argv[1],(byte *)&decodificado[0],&tamanho) == ARGUMENTO_INVALIDO)
  exit(ARGUMENTO_INVALIDO);
 
 printf("\n\nDecodificado: \n\n");
 for(contador = 0; contador < tamanho;contador++)
  printf("%c",decodificado[contador]);
 printf("\n\n");
 return OK;
}
/*RCSfile*/
