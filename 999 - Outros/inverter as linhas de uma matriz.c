#include <stdio.h>
#include <stdlib.h>

void main(){
  int t1, t2;
  printf("Insira os valores para t1 e t2:\n");
  scanf("%d %d", &t1, &t2);
  int matriz[t1][t2];
  int i, j;

  for(i =0; i<t1; i++){
    for(j=0; j<t2; j++){
      printf("matriz[%d][%d]: \0", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("Matriz normal:\n");
  //imprime a matriz normal
  printf("\n\n");

  for(i =0; i<t1;  i++){
    for(j=0; j<t2; j++){
      printf("%d", matriz[i][j]);
      }
      printf("\n"); 
  }

  //Invertendo a matriz:
  /*

  */
  //Transpondo a matriz:
  int matrizTRANSPOSTA[t2][t1];
  for(i =0; i<t1;  i++){
    for(j=0; j<t2; j++){
      matrizTRANSPOSTA[j][i] = matriz[i][j];
      }
  }  
  
  printf("Matriz Transposta:\n");
  //Imprimindo matriz transposta
  for(i =0; i<t2;  i++){
    for(j=0; j<t1; j++){
      printf("%d", matrizTRANSPOSTA[i][j]);
      }
      printf("\n"); 
  }

  printf("\n");
}