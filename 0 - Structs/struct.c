#include <stdio.h>
#include <stdlib.h>

struct palavra{
  int ordem;
  char letra;
  char palavra[25];
};

int main(){

  struct palavra primeirapalavra;
  //ADICIONANDO ORDEM À primeirapalavra:
  primeirapalavra.ordem = 7;
   //ADICIONANDO LETRA À primeirapalavra:
  primeirapalavra.letra = 'p';
    //ADICIONANDO PALAVRA À primeirapalavra:
  strcpy(primeirapalavra.palavra, "pimenta");

  //MOSTRANDO OS VALORES DESSE STRUCT:
  printf("Ordem: %d ||| Letra: %c ||| Palavra: %s|||", primeirapalavra.ordem, primeirapalavra.letra, primeirapalavra.palavra);

  puts("\n\n\n");
  puts("=================================================================");
  puts("\n\n\n");

  //FAZENDO UMA PEQUENA LISTA COM O STRUCT:

  struct palavra Listinha[3];

    Listinha[0].ordem = 0;
    Listinha[1].ordem = 1;
    Listinha[2].ordem = 2;
    Listinha[0].letra = 'd';
    Listinha[1].letra = 'l';
    Listinha[2].letra = 'b';
    strcpy(Listinha[0].palavra,"Dahora");
    strcpy(Listinha[1].palavra,"Legal");
    strcpy(Listinha[2].palavra,"Bacana");
 
    //Percorrendo o vetor
    int cont;
    for(cont = 0; cont < 3; cont++){
        printf("\nOrdem: %d, Primeira Letra: %c, Palavra: %s", Listinha[cont].ordem,Listinha[cont].letra, Listinha[cont].palavra);
    }

  puts("\n\n");


  return 0;
}