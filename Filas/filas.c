#include <stdlib.h>
#include <stdio.h>
#include "filas.h"

void FFVazia(TFila *Fila){
    Fila->frente =
        (TCelula*) malloc(sizeof(TCelula));
    Fila->tras = Fila->frente;
    Fila->frente->prox = NULL;
    Fila->tamanho = 0;
}

int Vazia(TFila Fila){
    return (Fila.frente == Fila.tras);
}

void Enfileirar(TProduto x, TFila *Fila){
    Fila->tras->prox =
        (TCelula*) malloc(sizeof(TCelula));
    Fila->tras = Fila->tras->prox;
    Fila->tras->item = x;
    Fila->tras->prox = NULL;
    Fila->tamanho++;
}

void Desenfileirar(TFila *Fila, TProduto *Item){
    TCelula* aux;
    if (!Vazia(*Fila)){
        aux = Fila->frente->prox;
        Fila->frente->prox = aux->prox;
        *Item = aux->item;
        free(aux);
        if (Fila->frente->prox == NULL)
            Fila->tras = Fila->frente;
        Fila->tamanho--;
    }
}

int Pesquisar(TFila fila, TProduto item){
  TCelula *Aux;
  Aux = fila.frente;
  while (Aux->prox != NULL)
  {
    if (Aux->prox->item.codigo == item.codigo)
      return Aux;
  }
  return 0;
}

void LerProduto(TProduto *item){
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
}

void Imprimir(TFila fila){
    TCelula *Aux;
  Aux = fila.frente->prox;
  while (Aux != NULL)
  {
    printf("%d\n", Aux->item.codigo);
    Aux = Aux->prox;
  }
}

void ImprimirProduto(TProduto item){
    printf("\n CODIGO do produto: %d", item.codigo);
    printf("\n NOME do produto: %s", item.nome);
    printf("\n DESCRICAO do produto: %s", item.descricao);
    printf("\n PRECO do produto: %.2f", item.preco);
    printf("\n UNIDADE do produto: %d", item.unidade);
}

void LiberarFila(TFila *fila){
    
}