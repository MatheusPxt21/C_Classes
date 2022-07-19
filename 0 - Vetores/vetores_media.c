#include <stdio.h>
#include <stdlib.h>

void main()
{
  int TAM;
  printf("Insira o tamanho do vetor:\n");
  scanf("%d", &TAM);

  int vetor[TAM], i;
  float soma = 0, media;

  for(i=0;i<TAM;i++)
  {
    printf("Insira o valor para a posicao %d do vetor:\n", i+1);
    scanf("%d", &vetor[i]);
    soma = soma + vetor[i];
  }
  printf("\nSoma = %.2f\n", soma);
  
  printf("Valores no vetor:\n");
  
  for(i=0;i<TAM;i++)
  {
    printf("Vetor[%d] = %d\n", i+1, vetor[i]);
  }

  media = soma/TAM;
  printf("\n\nA media e: %.3f", media);
  printf("\n");
}