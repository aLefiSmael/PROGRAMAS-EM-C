/*  PROGRAMA PARA FAZER UMA LISTA DINÂMICA  */

//ADICIONANDO AS BIBLIOTECAS NECESSÁRIAS

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//STRUCT NO VAI ARMAZENAR UM NÚMERO E APONTAR PARA OUTRA STRUCT

typedef struct no
{
int dado;
struct no *proximo;
}no;

//STRUCT LISTA SERVE PARA APONTAR PARA O PRIMEIRO NÚMERO DA LISTA

typedef no *ptr_no;

//AQUI DECLARO PARA O PROGRAMA AS FUNÇÕES QUE COLOCAREI NO PROGRAMA, COLOQUEI ELAS DEPOIS DA MAIN

void menu(int *n);
void mostrar(no *list);
void inserir(no *list);
void remover(no *list);
void liberar(no *list);

//INÍCIO DO PROGRAMA PRINCIPAL

int main(void)
{

setlocale(LC_ALL,"Portuguese");  //SETA A LINGUAGEM PARA PORTUGUÊS(ISO 8859-1)

int escolha = 0; //VARIÁVEL PARA PEGAR O QUE O USUÁRIO QUER DE ACORDO COM O MENU
ptr_no lista;   //lista VAI SER A VARÍAVEL QUE APONTARÁ PARA O PRIMEIRO ELEMENTO DA LISTA
lista = (ptr_no) (malloc(sizeof(no)));
lista->dado=0;
lista->proximo=NULL;

while (escolha!=9)  //WHILE FUNCIONA ENQUANTO O USUÁRIO NÃO DIGITA 9 PARA SAIR DO PROGRAMA
{

system("cls");

menu(&escolha);

switch (escolha)
{
case 1:
    mostrar(lista);
    break;

case 2:
inserir(lista);
break;

case 3:
remover(lista);
break;

default:
    break;
}


}



liberar(lista);

system("pause");

return(0);

}

//FUNÇÃO MENU

void menu(int *n)
{

printf("  PROGRAMA FEITO PARA ARMAZENAR NÚMEROS EM UMA LISTA DINÂMICA\n\n");
printf("1 = MOSTRAR NÚMEROS DA LISTA\n");
printf("2 = INSERIR NÚMERO NA LISTA\n");
printf("3 = REMOVER NÚMERO DA LISTA\n");
printf("9 = SAIR DO PROGRAMA\n\n");
printf("DIGITE O NÚMERO DE SUA ESCOLHA: ");
scanf("%d",n);

}

//FUNÇÃO MOSTRAR

void mostrar(no *list)
{

if (list->proximo == NULL)
{

system("cls");
printf("NÃO HÁ NÚMEROS NA LISTA.\n");
system("pause");

}
else
{
system("cls");
while (list->proximo != NULL)
{
list=list->proximo;
printf("[%d]",list->dado);
}
system("pause");
}


}

//FUNCÂO INSERIR

void inserir(no *list)
{

while (list->proximo!=NULL)
{
list = list->proximo;
}
list->proximo = (no*) malloc(sizeof(no));
list = list->proximo;
list->proximo = NULL;

system("cls");
printf("INFORME O NÚMERO QUE SERÁ ADICIONADO: ");
scanf("%d",&list->dado);

}

//FUNÇÃO REMOVER

void remover(no *list)
{
int remov;
ptr_no atual;
system("cls");
printf("INFORME O NÚMERO QUE VOCÊ DESEJA REMOVER DA LISTA: ");
scanf("%d",&remov);

if (list->proximo == NULL)
{

system("cls");
printf("NÃO HÁ NÚMEROS NA LISTA.\n");
system("pause");

}
else
{
atual = list;
list = list->proximo;

while (list->dado!=remov && list->proximo!=NULL)
{
atual = list;
list = list->proximo;
}
}

if (list->dado==remov)
{
if (list->proximo!=NULL)
{
atual->proximo = list->proximo;
}
else
{
atual->proximo = NULL;
}

free(list);
}
else
{
system("cls");
printf("NÃO HÁ ESSE NÚMERO NA LISTA.\n");
system("pause");
}

}

//FUNÇÃO LIBERAR

void liberar(no *list)
{

ptr_no atual;

if (list->proximo == NULL)
{
free(list);
}
else
{
atual = list;
list = list->proximo;

while (list->proximo!=NULL)
{
free(atual);
atual=list;
list=list->proximo;
}
free(list);
}


}