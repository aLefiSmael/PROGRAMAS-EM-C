#include "table.c"
#include <stdio.h>
#include <stdlib.h>

void mostrar(ptr_table tabela)
{
  system("cls");
  if (tabela->proximo == NULL)
  {
    printf("NÃO HÁ PALAVRAS NA TABELA");
    system("pause");
  }
  else
  {
    printf("AS PALAVRAS DA TABELA SÃO:\n\n");
    while (tabela->proximo != NULL)
    {
      tabela = tabela->proximo;
      printf("[ %s ] ", tabela->palavra);
    }
    system("pause");
  }
}