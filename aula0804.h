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

#ifndef _AULA0804_
#define _AULA0804_ "@(#)aula0804.h $Revision$"
#define ARGUMENTO_INVALIDO 10
#define EOS '\0'


typedef unsigned char byte;
typedef enum {falso,verdadeiro} boolean;

byte
GerarDigitoVerificadorPisPasep (char *); 

boolean
ValidarPisPasep (char *);

#endif 
/*$RCSfile$*/
 
