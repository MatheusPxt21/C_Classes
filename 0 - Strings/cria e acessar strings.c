#include <stdio.h>
#include <stdlib.h>

void main(){
  char palavra[255];

  printf("Digite uma palavra:\n");

  //Limpa o Buffer
  setbuf(stdin, 0);

  //Lê a string com o FGETS
  fgets(palavra, 255, stdin);

  //Libera o espaço que foi reservado mas não foi utilizado
  palavra[strlen(palavra)-1] = '\0';

  //Imprime a string com o %s
  printf("A palavra digitada foi:\n");
  printf("%s", palavra);
  
  
  printf("\n");
}