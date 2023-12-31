#include "table.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void excluir(ptr_table tabela)
{
    char palavra[50];
    int excluido = 0;
    ptr_table aux;
    aux = (ptr_table)malloc(sizeof(ptr_table));
    printf("INFORME A PALAVRA QUE VOCÊ DESEJA EXCLUIR DA TABELA: ");
    scanf("%s", palavra);
    system("cls");
    if (tabela->proximo == NULL)
    {
        printf("NÃO HÁ PALAVRAS COM ESSE NOME NA TABELA");
        system("pause");
    }
    else
    {
        while (tabela->proximo != NULL || excluido == 0)
        {
            tabela = tabela->proximo;
            aux->proximo = tabela;

            if (!strcmp(tabela->palavra, palavra))
            {
                aux->proximo = tabela->proximo;
                free(tabela);
                excluido = 1;
            }
        }
    }
    free(aux);
}
