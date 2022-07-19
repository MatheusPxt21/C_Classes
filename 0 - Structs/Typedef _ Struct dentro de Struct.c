#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
  int dia;
  int mes;
  int ano;
}Data2;

struct Aluno{
  int matricula_aluno;
  Data2 nascimento_aluno;
};

int main()
{
  struct Aluno aluno1;

  printf("Insira a matricula do aluno:\n");
  scanf("%d", &aluno1.matricula_aluno);
  printf("\n");
  printf("Insira a data de nascimento do aluno:\n");
  printf("Dia:\n");
  scanf("%d", &aluno1.nascimento_aluno.dia);
  printf("\nMes:\n");
  scanf("%d", &aluno1.nascimento_aluno.mes);
  printf("\nAno:\n");
  scanf("%d", &aluno1.nascimento_aluno.ano);
  
  printf("\n");
  printf("===========__________=================________=======\n");
  printf("Aluno %d nasceu no dia %d, do mes %d, no ano %d", aluno1.matricula_aluno, aluno1.nascimento_aluno.dia, aluno1.nascimento_aluno.mes, aluno1.nascimento_aluno.ano);
  printf("\n===========__________=================________=======\n");

  
}