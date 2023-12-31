#include "table.c"
#include <stdio.h>

void inserir(ptr_table tabela)
{
       system("cls");

       while (tabela->proximo != NULL)
       {
              tabela = tabela->proximo;
       }
       tabela->proximo = (ptr_table)malloc(sizeof(ptr_table));
       tabela = tabela->proximo;
       tabela->proximo = NULL;
       printf("INFORME A PALAVRA QUE VOCÊ DESEJA ADICIONAR A TABELA:");
       scanf("%s", tabela->palavra);
}