#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


void FPVazia(TPilha *Pilha){
    Pilha->topo = (TCelula*)
        malloc(sizeof(TCelula));
    Pilha->fundo = Pilha->topo;
    Pilha->topo->prox = NULL;
    Pilha-> tamanho = 0;
}

void Empilha(TProduto x, TPilha *Pilha){
    TCelula* Aux;
    Aux = (TCelula*) malloc(sizeof(TCelula));
    Pilha->topo->item= x;
    Aux->prox = Pilha->topo;
    Pilha->topo = Aux;
    Pilha->tamanho++;
}

/*
void Desempilha(TPilha *Pilha, TProduto *Item){
    TCelula* q;
    if(Vazia(*Pilha)){
        printf("Erro: lista vazia\n");
        return;
    }
    q = Pilha->topo;
    Pilha->topo = q->prox;
    *Item = q->prox->item;
    free(q);
    Pilha->tamanho--;
}
*/