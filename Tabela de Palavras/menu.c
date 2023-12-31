#include <stdio.h>

int menu()
{
  printf("ESSE PROGRAMA ARMAZEMA PALAVRAS EM UMA TABELA QUE PODE SER "
         "CONSULTADA\n\n");
  printf("   OPÇÕES DO MENU\n\n");
  printf("1 - MOSTRAR TODAS AS PALAVRAS DA TABELA\n");
  printf("2 - INSERIR PALAVRA NA TABELA\n");
  printf("3 - EXCLUIR UMA PALAVRA DA TABELA\n");
  printf("4 - CONSULTAR SE UMA PALAVRA ESTÃO NA TABELA\n");
  printf("   INFORME A OPÇÃO DESEJADA: ");
  int opicao = 20;
  scanf("%d", &opicao);
  while (!((opicao >= 1 && opicao <= 5) || (opicao == 9)))
  {
    printf("\nNÚMERO INFORMADO INVÁLIDO, INFORME OUTRO NÚMERO.");
    scanf("%d", &opicao);
  }

  return opicao;
}