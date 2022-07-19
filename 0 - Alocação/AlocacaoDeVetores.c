#include <stdio.h>
#include <stdlib.h>

int* ALOCA_VETOR(tam)
{
  int *aux;

  aux = (int*)malloc(tam * sizeof(int));

  return aux;
}

int main()
{
  int tamanho, *vetor;

  printf("Insira o tamanho do vetor:\n");
  scanf("%d", &tamanho);

  vetor = ALOCA_VETOR(tamanho);

  int i;
  for(i = 0; i< tamanho; i++){
    printf("Insira um valor para a posição %d do vetor:\n", i+1);
    scanf("%d", &vetor[i]);
  }

  printf("\nImprimindo o vetor:\n");
  for(i=0;i<tamanho;i++){
    printf("| Vetor[%d] = %d ||", i+1, vetor[i]);
  }

  free(vetor);
  return 0;
}