#include <stdlib.h>
#include <stdio.h>
#include "listas.h"

// passagem por referência: alteração será permanente!
void FLVazia(TLista *Lista)
{
  Lista->primeiro =
      (TCelula *)malloc(sizeof(TCelula));
  Lista->ultimo = Lista->primeiro;
  Lista->primeiro->prox = NULL;
  Lista->tamanho = 0;
}

// passagem de parâmetro por valor: a alteração NÃO é permanente!
int Vazia(TLista Lista)
{
  return (Lista.primeiro == Lista.ultimo);
}

void Inserir(TProduto x, TLista *Lista)
{
  Lista->ultimo->prox =
      (TCelula *)malloc(sizeof(TCelula));
  Lista->ultimo = Lista->ultimo->prox;
  Lista->ultimo->item = x;
  Lista->ultimo->prox = NULL;
  Lista->tamanho++;
}

TCelula *Pesquisar(TLista Lista, TProduto Item)
{
  TCelula *Aux;
  Aux = Lista.primeiro;
  while (Aux->prox != NULL)
  {
    if (Aux->prox->item.codigo == Item.codigo)
      return Aux;
    Aux = Aux->prox;
  }
  return NULL;
}

void Excluir(TLista *Lista, TProduto *Item)
{
  /* Obs.: o item a ser retirado e o apontado por p */
  TCelula *Aux1, *Aux2;
  Aux1 = Pesquisar(*Lista, *Item);
  if (Aux1 != NULL)
  {
    Aux2 = Aux1->prox;
    Aux1->prox = Aux2->prox;
    *Item = Aux2->item;
    if (Aux1->prox == NULL)
      Lista->ultimo = Aux1;
    free(Aux2);
    Lista->tamanho--;
  }
}

void Imprimir(TLista Lista)
{
  TCelula *Aux;
  Aux = Lista.primeiro->prox;
  while (Aux != NULL)
  {
    printf("%d\n", Aux->item.codigo);
    Aux = Aux->prox;
  }
}

void ImprimirProduto(TProduto item)
{
  printf("\n CODIGO do produto: %d", item.codigo);
  printf("\n NOME do produto: %s", item.nome);
  printf("\n DESCRICAO do produto: %s", item.descricao);
  printf("\n PRECO do produto: %.2f", item.preco);
  printf("\n UNIDADE do produto: %d", item.unidade);
}

void LerProduto(TProduto *item)
{
  printf("\nDIGITE O CODIGO DO PRODUTO: ");
  fflush(stdin);
  scanf("%d", &item->codigo);

  printf("\nDIGITE O NOME DO PRODUTO: ");
  fflush(stdin);
  scanf("%s", &item->nome);

  printf("\nDIGITE A DESCRICAO DO PRODUTO: ");
  fflush(stdin);
  scanf("%s", &item->descricao);

  printf("\nDIGITE O PRECO DO PRODUTO: ");
  fflush(stdin);
  scanf("%.2f", &item->preco);

  printf("\nDIGITE A UNIDADE DO PRODUTO: ");
  fflush(stdin);
  scanf("%d", &item->unidade);
  /*
  implementar a leitura dos outros campos
  */
}

void AlterarProduto(TProduto *item){
    int opcao2 = 0;
  do
  {
    printf("\n******************** MENU ***********************");
    printf("\n\tDESEJA ALTERAR O:");
    printf("\n\t1. NOME");
    printf("\n\t2. DESCRICAO");
    printf("\n\t3. PRECO");
    printf("\n\t4. UNIDADE");
    printf("\n\t5. SAIR");
    printf("\n\nDIGITE UMA OPCAO:");
    fflush(stdin);
    scanf("%d", &opcao2);

    switch (opcao2)
    {
    case 1:
      printf("\nDIGITE O NOME A SER ALTERADO: ");
      fflush(stdin);
      scanf("%s", &item->nome);
      break;
    case 2:
      printf("\nDIGITE A DESCRICAO A SER ALTERADA: ");
      fflush(stdin);
      scanf("%s", &item->descricao);

      break;
    case 3:
      printf("\nDIGITE O PRECO A SER ALTERADO: ");
      fflush(stdin);
      scanf("%.2f", &item->preco);

      break;
    case 4:
      printf("\nDIGITE A UNIDADE A SER ALTERADA: ");
      fflush(stdin);
      scanf("%d", &item->unidade);

      break;
    case 5:
      system("cls");
      printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: SAINDO DO SISTEMA! <<<<<<<<<<<<<<<<<<<<<<\n\n");
      // system("PAUSE");
      printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
      fflush(stdin);
      getchar();

      break;
    default:
      system("cls");
      printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: DIGITE UMA OPCAO VALIDA! <<<<<<<<<<<<<<<<<<<<<<\n\n");
      // system("PAUSE");
      printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
      fflush(stdin);
      getchar();
      break;
    }
  } while (opcao2 != 5);
}
