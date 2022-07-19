#include <stdio.h>
#include <stdlib.h>

void main(){
  int i;
  printf("Insira o valor para i:\n");
  scanf("%d", &i);

  for(i; i > 0; i--)
  {
    printf("%.3d, ", i);
  }

  printf("Insira novo valor para i:\n");
  scanf("%d", &i);

  while(i>0)
  {
    printf("%.3d\n", i);
    i--;
  }

    printf("Insira novo valor para i:\n");
    scanf("%d", &i);

  do{
    printf("%.3d ||", i);
    i--;
  }while(i>0);

}