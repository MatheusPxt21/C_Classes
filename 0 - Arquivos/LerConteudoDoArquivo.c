#include <stdio.h>
#include <stdlib.h>

int main()
{
  int c;
  FILE *arquivo;

  arquivo = fopen("Nome_do_arquivo_para_o_codigo_LerConteudoDoArquivo.c.txt", "r");

  if(arquivo) /* confere se o arquivo foi aberto/criado */
  { 
    // Enquanto tiver algo no arquivo:
    while((c = getc(arquivo)) != EOF){
      printf("%c", c);
    }
  }

  fclose(arquivo);

  return 0;
}
