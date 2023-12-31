#include "table.c"
#include <stdio.h>
#include <stdlib.h>

void limpar(ptr_table tabela)
{
    ptr_table aux;
    aux = (ptr_table)malloc(sizeof(ptr_table));
    aux = tabela;
    while (tabela->proximo != NULL)
    {
        tabela = tabela->proximo;
        free(aux);
        aux = tabela;
    }
    free(tabela);
    free(aux);
}