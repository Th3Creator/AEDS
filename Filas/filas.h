#include <stdio.h>
#include <stdlib.h>

typedef struct item
{
    int codigo;
    char nome[100];
    char descricao[100];
    double preco;
    int unidade;
} TProduto;

typedef struct celula
{
    TProduto item;
    struct celula* prox;
} TCelula;

typedef struct fila
{
    TCelula* frente;
    TCelula* tras;
    int tamanho;
} TFila;

typedef struct filaAuxiliar
{
    TCelula* frente;
    TCelula* tras;
    int tamanho;
} TFaux;


void FFVazia(TFila *Fila);

int Vazia(TFila Fila);

void Enfileirar(TProduto x, TFila *Fila);

void Desenfileirar(TFila *Fila, TProduto *Item);

int Pesquisar(TFila fila, TProduto item);

void Imprimir(TFila fila);

void ImprimirProduto(TProduto item);