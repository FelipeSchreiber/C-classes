/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor:Felipe Schreiber Fernandes 

$Author$
$Date$
$Log$

*/

#ifndef _AULA0901_
#define _AULA0901_ "@(#)aula0901.h $Revision$"
#define ARGUMENTO_INVALIDO 10
#define  CONJUNTO_BASE_64 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
#define OK 0
#define TAMANHO_MAXIMO_CHAR 768
#define TAMANHO_MAXIMO_BYTES 1051

typedef unsigned char byte;
typedef enum {falso,verdadeiro} tipoErros;

tipoErros
CodificarBase64 (byte *entrada, unsigned numeroBytes, char *saida);

tipoErros
DecodificarBase64 (char *entrada, byte *saida, unsigned *numeroBytes);

#endif
/*$RCSfile$*/

