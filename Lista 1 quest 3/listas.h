#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct produto{
    int codigo;
    char nome[100];
    char descricao[100];
    double preco;
    int unidade;
    int validade;
    char marca[100];
    int corredor;
    double peso;
    char sabor[100];
} TProduto;

typedef struct celula{
    TProduto item;
    struct celula *prox;
} TCelula;


typedef struct {
  TCelula *primeiro;
  TCelula *ultimo;
  int tamanho;
} TLista;

// Funções 
void FLVazia(TLista *Lista);

void Preencher(TProduto *item);

void Inserir(TProduto x, TLista *Lista);

void Imprimir(TLista *Lista);

#endif // LISTA_H_INCLUDED