int
main (int argc, char *argv[ ])
{
  unsigned linha, coluna;
  int primeiraMatriz [LINHAS][COLUNAS];
  int segundaMatriz [LINHAS][COLUNAS]; 
  int matrizResultado [LINHAS][COLUNAS];
  char *validacao;

  if (argc != NUMERO_ARGUMENTOS)
  {
    printf ("Uso: %s <a11> <a12> ... <b%i%i>\n", argv [0], LINHAS, COLUNAS);
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  }

  for (linha = 0; linha < LINHAS; linha++)
    for (coluna = 0; coluna < COLUNAS; coluna++)
    {
      primeiraMatriz [linha][coluna] =  (int)
        strtol (argv [linha * COLUNAS + coluna + 1], &validacao, 10);
      if (*validacao != EOS)
      {
        printf ("Caractere invalido\n");
        exit (ARGUMENTO_INVALIDO);
      }

      segundaMatriz [linha][coluna] = (int)
        strtol (argv [linha * COLUNAS + coluna + 1 + LINHAS * COLUNAS], &validacao, 10);
      if (*validacao != EOS)
      {
        printf ("Caractere invalido\n");
        exit (ARGUMENTO_INVALIDO);
      }
   }

  SomarMatrizes (primeiraMatriz, segundaMatriz, matrizResultado);

  for (linha = 0; linha < LINHAS; linha++)
  {
    for (coluna = 0; coluna < COLUNAS; coluna++)
      printf ("%i\t", matrizResultado [linha][coluna]);
    printf ("\n");
  }

  return OK;
}
 /*for(indice = 1;indice < (NUMERO_MAXIMO_LINHAS1*NUMERO_MAXIMO_COLUNAS1 + 1); indice++)
 {
  linha = (indice-1)/ NUMERO_MAXIMO_COLUNAS1;
  coluna = (indice-1) % NUMERO_MAXIMO_COLUNAS1;
  matriz1[linha][coluna] = strtof(argv[indice],&validacao);
   
  printf("\n\n %s \n\n",argv[indice]);
  printf("\n\n %f \n\n",matriz1[linha][coluna]);
  
  if(validacao != EOS)
  {
   printf("\n\nArgumento %c invalido\n\n",*validacao);
   exit(ARGUMENTO_INVALIDO);
  }
 }
 
 for(;indice < argc;indice++)
 {
  linha = (indice-1 -(NUMERO_MAXIMO_LINHAS1*NUMERO_MAXIMO_COLUNAS1)/ NUMERO_MAXIMO_COLUNAS2);
  coluna = (indice % NUMERO_MAXIMO_COLUNAS2);
  matriz2[linha][coluna] = strtof(argv[indice],&validacao);
  
  if(*validacao != EOS)
  {
   printf("\n\nArgumento %d invalido\n\n",*validacao);
   exit(ARGUMENTO_INVALIDO);
  }
 }*/


