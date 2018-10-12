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

#ifndef _AULA0801_
#define _AULA0801_ "@(#)aula0801.h $Revision$"
#define ARGUMENTO_INVALIDO 10

typedef unsigned char byte;
typedef enum {falso,verdadeiro} boolean;

byte
GerarDigitoVerificadorPisPasep (byte [ ]); 

boolean
ValidarPisPasep (byte [ ]);

#endif 
/*$RCSfile$*/
 
