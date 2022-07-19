#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c;
  FILE *arquivo;

  arquivo = fopen("Nome_do_arquivo_para_o_codigo_CriarArquivos.c.txt", "w");

  fclose(arquivo);

  return 0;
}
