#include <stdio.h>
#include <stdlib.h>

int ALOCA_MATRIZ(int linhas, int colunas)
{
  int **matriz;
  int i, j;

  //ALOCANDO MEMÓRIA PARA AS LINHAS
  matriz = (int **) malloc(linhas  * sizeof (int *));

  //ALOCANDO MEMÓRIA PARA AS COLUNAS
  for(i=0; i<linhas; i++){
    matriz[i] = (int*) malloc(colunas * sizeof(int));
  } 
  return matriz;
}

int PREENCHE_MATRIZ(int linhas, int colunas)
{
  int matriz[linhas][colunas];
  int i, j;

  for(i=0; i<linhas; i++){
    for(j=0;j<colunas;j++){
      printf("\nInsira um valor para M[%d][%d]:\n", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nImprimindo a matriz:\n\n\n");
  for(i=0; i<linhas; i++){
    for(j=0;j<colunas;j++){
      printf("\n MATRIZ[%d][%d]= %d\n", i+1, j+1, matriz[i][j]);
      
    }
  }  
  
  return matriz;
}

int main()
{
  int tamLIN, tamCOL;
  printf("Insira, separando por espacos, a quantidade de linhas e de colunas:\n");
  scanf("%d %d", &tamLIN, &tamCOL);

  ALOCA_MATRIZ(tamLIN, tamCOL);
  puts("\nPassou por aqui\n");
  puts("Pressione 0: \n");
  int aux;
  scanf("%d", &aux);
  system("CLS");
  PREENCHE_MATRIZ(tamLIN, tamCOL);
  puts("/**/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\n\n\n");

  return 0;
}