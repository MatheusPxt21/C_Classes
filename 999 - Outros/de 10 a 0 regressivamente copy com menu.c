#include <stdio.h>
#include <stdlib.h>

void main(){
  int i;
  int opcao;

  printf("Opcao1 ==> utilizando o for, os numeros aparecerao em uma linha separados por virgula");
  printf("\nOpcao2 ==> utilizando o while, os numeros aparecerao um por linha");
  printf("\nOpcao3 ==> utilizando o do while, os numeros aparecerao em uma linha separados por barra\n\n");
  

  while(opcao>1 || opcao <3){
    printf("\nInsira a opcao desejada:\n");
    printf("('900' caso queira sair)\n");
    scanf("%d", &opcao);
    switch(opcao)
    {
      case 1:
      printf("\nInsira o valor para i:\n");
      scanf("%d", &i);

      for(i; i > 0; i--)
      {
        printf("%.3d, ", i);
      }
      printf("\n");
      break;

      case 2:
        printf("\nInsira o valor para i:\n");
        scanf("%d", &i);
        printf("\n");
        while(i>0)
        {
          printf("%.3d\n", i);
          i--;
        }
        printf("\n");
        break;

      case 3:
        printf("\nInsira um valor para i:\n");
        scanf("%d", &i);
        printf("\n");
        do{
          printf("%.3d ||", i);
          i--;
        }while(i>0);
        printf("\n");
        break;

      default:
        printf("Opcao invalida!\n\n");
        break;
    }
    if (opcao == 900)
      break;
  }

}