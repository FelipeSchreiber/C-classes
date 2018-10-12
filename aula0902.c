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
 char codificado[TAMANHO_MAXIMO_BYTES];
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

 if(strlen(argv[1]) > TAMANHO_MAXIMO_CHAR)
 {
  printf("\n\n A string deve conter no maximo %u caracteres incluindo a quebra de linha\"\r\n\"\n\n", TAMANHO_MAXIMO_CHAR);
  exit(ARGUMENTO_INVALIDO);
 }
 
 if(CodificarBase64((byte *)argv[1],strlen(argv[1]),&codificado[0]) == ARGUMENTO_INVALIDO)
  exit(ARGUMENTO_INVALIDO); 
 
 printf("\n\nCodificado em base64: %s \n\n",codificado); 
 
 return OK;
}
/*RCSfile*/
