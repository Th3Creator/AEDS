#include <stdlib.h>
#include <stdio.h>
#include "listas.h"

void FLVazia(TLista *Lista)
{
  Lista->primeiro =
      (TCelula *)malloc(sizeof(TCelula));
  Lista->ultimo = Lista->primeiro;
  Lista->primeiro->prox = NULL;
  Lista->tamanho = 0;
}

void Inserir(TProduto x, TLista *Lista){
  Lista->ultimo->prox =
      (TCelula *)malloc(sizeof(TCelula));
  Lista->ultimo = Lista->ultimo->prox;
  Lista->ultimo->item = x;
  Lista->ultimo->prox = NULL;
  Lista->tamanho++;
}

void Preencher(TProduto *item){
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

  /* ----------------- // --------------*/

  printf("\nDIGITE A VALIDADE DO PRODUTO: ");
  fflush(stdin);
  scanf("%d", &item->validade);

  printf("\nDIGITE A MARCA DO PRODUTO: ");
  fflush(stdin);
  scanf("%s", &item->marca);

  printf("\nDIGITE O CORREDOR DO PRODUTO: ");
  fflush(stdin);
  scanf("%d", &item->corredor);

  printf("\nDIGITE O PESO DO PRODUTO: ");
  fflush(stdin);
  scanf("%.2f", &item->peso);

  printf("\nDIGITE O SABOR DO PRODUTO: ");
  fflush(stdin);
  scanf("%s", &item->sabor);
}

void Imprimir(TLista *Lista){
  TCelula *Aux;
  Aux = Lista.primeiro->prox;
  while (Aux != NULL)
  {
    printf("%d\n", Aux->item.codigo);
    Aux = Aux->prox;
  }
}