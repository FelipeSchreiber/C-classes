/*Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor:Felipe Schreiber Fernandes 

$Author$
$Date$
$Log$

*/

#include "aula0601.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

tipoErros
MostrarMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ] [NUMERO_MAXIMO_COLUNAS ], unsigned maximoLinhas, unsigned maximoColunas)
{
 int colunas,linhas;
 system("clear");
 for(linhas = 0;linhas < maximoLinhas;linhas++)
 {
  for(colunas = 0;colunas < maximoColunas;colunas++)
  {
   printf("%c",monitor[linhas][colunas] == '0' ?'0':'1');
  }
  printf("\n");
 }
 sleep (1);
 return OK;
}
 
tipoErros
LimparMonitor (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas)
{
 int colunas,linhas;
 for(linhas = maximoLinhas;linhas >= 0;linhas--)
 {
  for(colunas = 0;colunas < maximoColunas;colunas++)
  {
   monitor[linhas][colunas] = '0';
  }
 }
 MostrarMonitor(monitor,maximoLinhas,maximoColunas);
 return OK;
}
 
tipoErros
DesenharRetangulo (tipoPixel monitor [NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned ordenadaEsquerda, unsigned abscissaEsquerda, unsigned ordenadaDireita, unsigned abscissaDireita)
{
 int colunas,linhas;
 for(colunas = abscissaEsquerda;colunas <= abscissaDireita;colunas++)
 {
  monitor[ordenadaEsquerda][colunas] = '1';
 }
 
 for(colunas = abscissaEsquerda;colunas <= abscissaDireita;colunas++)
 {
  monitor[ordenadaDireita][colunas] = '1';
 }
 
 for(linhas = ordenadaEsquerda;linhas <= ordenadaDireita;linhas++)
 {
  monitor[linhas][abscissaEsquerda] = '1';
 }
 for(linhas = ordenadaEsquerda;linhas <= ordenadaDireita;linhas++)
 {
  monitor[linhas][abscissaDireita] = '1';
 }
 MostrarMonitor(monitor,maximoLinhas,maximoColunas);
 return OK;
}
 
tipoErros
PreencherPoligono (tipoPixel monitor[NUMERO_MAXIMO_LINHAS ][ NUMERO_MAXIMO_COLUNAS], unsigned maximoLinhas, unsigned maximoColunas, unsigned linha, unsigned coluna)
{
 if(monitor[linha][coluna] == aceso)
  return OK;
 else 
  monitor[linha][coluna] = aceso;
 
  MostrarMonitor(monitor,maximoLinhas,maximoColunas);
   
  if(linha -1 > 0)
  {
   PreencherPoligono (monitor,maximoLinhas,maximoColunas,linha - 1,coluna);
  }
 
  if(coluna -1 > 0) 
  {
   PreencherPoligono (monitor,maximoLinhas, maximoColunas, linha, coluna - 1);
  }
 
  if(linha + 1 < maximoLinhas)
  {
   PreencherPoligono (monitor,maximoLinhas,maximoColunas,linha + 1,coluna);
  }
 
  if(coluna + 1 < maximoColunas )
  {
   PreencherPoligono (monitor,maximoLinhas, maximoColunas, linha, coluna + 1);
  }
 
 return OK;
}
/*$RCSfile$*/
                                  
