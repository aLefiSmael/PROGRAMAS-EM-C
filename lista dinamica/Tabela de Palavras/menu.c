#include <stdio.h>

int menu()
{
  printf("ESSE PROGRAMA ARMAZEMA PALAVRAS EM UMA TABELA QUE PODE SER "
         "CONSULTADA\n\n");
  printf("   OP��ES DO MENU\n\n");
  printf("1 - MOSTRAR TODAS AS PALAVRAS DA TABELA\n");
  printf("2 - INSERIR PALAVRA NA TABELA\n");
  printf("3 - EXCLUIR UMA PALAVRA DA TABELA\n");
  printf("4 - CONSULTAR SE UMA PALAVRA EST�O NA TABELA\n");
  printf("   INFORME A OP��O DESEJADA: ");
  int opicao = 20;
  scanf("%d", &opicao);
  while (!((opicao >= 1 && opicao <= 5) || (opicao == 9)))
  {
    printf("\nN�MERO INFORMADO INV�LIDO, INFORME OUTRO N�MERO.");
    scanf("%d", &opicao);
  }

  return opicao;
}