/*
Universidade Federal do Rio de Janeiro
Escola Politecnica
Departamento de Eletronica e de Computacao
EEL270 - Computacao II - Turma 2017/1
Prof. Marcelo Luiz Drumond Lanza
Autor: Felipe Schreiber Fernandes

$Author$
$Date$
$Log$

*/

#include "aula0601.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

#define NUMERO_DE_PARAMETROS_INVALIDOS 1
#define NUMERO_DE_PARAMETROS_VALIDOS 9 
#define EOS '\0'

int 
main(int argc,char *argv[])
{
 char *validacao=NULL;
 int indice,maximoLinhas,maximoColunas,ordenadaEsquerda,ordenadaDireita,abscissaEsquerda,abscissaDireita,auxOrdenada,auxAbscissa;
 int linhaPonto,colunaPonto;
 tipoPixel monitor[NUMERO_MAXIMO_LINHAS][NUMERO_MAXIMO_COLUNAS];
 
 if(argc != NUMERO_DE_PARAMETROS_VALIDOS)
 {
  printf("\n\nNumero de argumentos invalidos\n\n");
  exit(NUMERO_DE_PARAMETROS_INVALIDOS);  
 }

 for(indice = 1; indice < argc;indice++)
 if(argv[indice][0] == '-')
 {
  printf("\n\nNao eh permitido a entrada de numeros negativos\n\n");
  exit(CARACTERE_INVALIDO);
 }
 
 maximoLinhas=strtod(argv[1],&validacao);
  if(*validacao != EOS)
  {
   printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos\n\n",*validacao);
   exit(CARACTERE_INVALIDO);
  }
 
 if(maximoLinhas > NUMERO_MAXIMO_LINHAS)
  {
   printf("O numero desejado de linhas ultrapassa a quantidade permitida de %d linhas",NUMERO_MAXIMO_LINHAS);
   exit(FORA_DE_ESCOPO);
  }
 
 maximoColunas=strtod(argv[2],&validacao);
  if(*validacao != EOS)
  {
   printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
   exit(CARACTERE_INVALIDO);
  }
  if(maximoColunas > NUMERO_MAXIMO_COLUNAS)
  { 
   printf("O numero maximo de colunas ultrapassa a quantidade permitida de %d linhas",NUMERO_MAXIMO_LINHAS);
   exit(FORA_DE_ESCOPO);
  }
  
 ordenadaEsquerda=strtod(argv[3],&validacao);
   if(*validacao != EOS)
   {
    printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
    exit(CARACTERE_INVALIDO);
   }
   if(ordenadaEsquerda > maximoLinhas)
   {
    printf("\n\nA ordenada tem que ser menor ou igual a %d",maximoLinhas);
    exit(ORDENADA_INVALIDA);
   }

 abscissaEsquerda=strtod(argv[4],&validacao);
   if(*validacao != EOS)
   {
    printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
    exit(CARACTERE_INVALIDO);
   }
   if(abscissaEsquerda > maximoColunas)
   {
    printf("\n\nA ordenada tem que ser menor ou igual a %d",maximoColunas);
    exit(ORDENADA_INVALIDA);
   }
  
 ordenadaDireita=strtod(argv[5],&validacao);
   if(*validacao != EOS)
   {
    printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
    exit(CARACTERE_INVALIDO);
   }
   if(ordenadaDireita > maximoLinhas)
   {
    printf("\n\nA ordenada tem que ser menor ou igual a %d",maximoLinhas);
    exit(ORDENADA_INVALIDA);
   }

 abscissaDireita=strtod(argv[6],&validacao);
   if(*validacao != EOS)
   {
    printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
    exit(CARACTERE_INVALIDO);
   }
   if(abscissaDireita > maximoColunas)
   {
    printf("\n\nA ordenada tem que ser menor ou igual a %d",maximoColunas);
    exit(ORDENADA_INVALIDA);
   }

 if(abscissaEsquerda < abscissaDireita)
 {
  auxAbscissa = abscissaEsquerda;
  abscissaEsquerda = abscissaDireita;
  abscissaDireita = auxAbscissa;
 }

 if(ordenadaEsquerda < ordenadaDireita)
 {
  auxOrdenada = abscissaEsquerda;
  abscissaEsquerda = abscissaDireita;
  abscissaDireita = auxOrdenada;
 }
 
 linhaPonto=strtod(argv[7],&validacao);
  if(*validacao != EOS)
  {
   printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
   exit(CARACTERE_INVALIDO);
  }
  if(linhaPonto > maximoLinhas)
  {
   printf("A ordenada tem que ser menor ou igual a %d",maximoLinhas);
   exit(ORDENADA_INVALIDA);
  }

 colunaPonto=strtod(argv[8],&validacao);
  if(*validacao != EOS)
  {
   printf("\n\nO argumento %c eh invalido.Apenas numeros sao permitidos",*validacao);
   exit(CARACTERE_INVALIDO);
  }
  if(colunaPonto > maximoColunas)
  {
   printf("A ordenada tem que ser menor ou igual a %d",maximoColunas);
   exit(ORDENADA_INVALIDA);
  }
 
 LimparMonitor(monitor,maximoLinhas,maximoColunas);
 
 DesenharRetangulo(monitor,maximoLinhas,maximoColunas,ordenadaEsquerda,abscissaEsquerda,ordenadaDireita,abscissaDireita);
 
 PreencherPoligono(monitor,maximoLinhas,maximoColunas,linhaPonto,colunaPonto);
 return OK;
}


