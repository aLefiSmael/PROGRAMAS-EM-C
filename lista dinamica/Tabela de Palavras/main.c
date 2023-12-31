// PROGRAMA QUE ARMAZEMA PALAVRAS EM UMA TABELA QUE PODE SER CONSULTADA

#include "funcoes.h"
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  ptr_table tabela;
  tabela = (ptr_table)malloc(sizeof(ptr_table));
  tabela->proximo = NULL;
  tabela->palavra[0] = 'N';
  tabela->palavra[1] = '\0';
  int resposta = 0;

  // while até que digite 9 para fechar o programa

  while (resposta != 9)
  {
    system("cls");
    resposta = menu();
    switch (resposta)
    {

    case 1:
      mostrar(tabela);
      break;

    case 2:
      inserir(tabela);
      break;

    case 3:
      excluir(tabela);
      break;

    case 4:
      consulta(tabela);
      break;

    default:
      break;
    }
  }
  limpar(tabela);
  system("cls");
  system("pause");
  return 0;
}