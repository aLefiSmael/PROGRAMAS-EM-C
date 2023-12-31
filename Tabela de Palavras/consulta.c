#include "table.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void consulta(ptr_table tabela)
{
    system("cls");
    int achado = 0;
    char palavra[50];
    printf("INFORME A PALAVRA QUE VOCÊ DESEJA CONSULTAR NA TABELA: ");
    scanf("%s", palavra);
    if (tabela->proximo == NULL)
    {
        printf("\nNÃO HÁ PALAVRAS COM ESSE NOME NA TABELA");
        system("pause");
    }

    else
    {

        while (tabela->proximo != NULL)
        {
            tabela = tabela->proximo;

            if (!strcmp(tabela->palavra, palavra))
            {
                achado = 1;
                break;
            }
        }
        if (achado == 1)
        {
            printf("\nESSA PALAVRA ESTÁ NA TABELA");
            system("pause");
        }
        else
        {
            printf("\nNÃO HÁ PALAVRAS COM ESSE NOME NA TABELA");
            system("pause");
        }
    }
}