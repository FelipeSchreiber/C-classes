/*Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor:Felipe Schreiber Fernandes 

$Author$
$Date$
$Log$

*/
#ifndef _AULA0601_
#define _AULA0601_ "@(#)aula0601.h $Revision$"
#define APAGADO '0'
#define ACESO '1'
#define NUMERO_MAXIMO_LINHAS (25) 
#define NUMERO_MAXIMO_COLUNAS (80)

typedef enum {OK = 0,ABSCISSA_INVALIDA = 1,ORDENADA_INVALIDA = 2,CARACTERE_INVALIDO = 3,FORA_DE_ESCOPO = 4} tipoErros;
typedef enum {apagado,aceso}tipoPixel;

tipoErros
MostrarMonitor(tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas);

tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas);

tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned ordenadaEsquerda, unsigned abscissaEsquerda, unsigned ordenadaDireita, unsigned abscissaDireita);

tipoErros
PreencherPoligono (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned linha, unsigned coluna);

#endif
/*$RCSfile$*/

