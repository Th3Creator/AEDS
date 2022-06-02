#include <stdio.h>
#include <stdlib.h>
#include "listas.c"

int main(){
    // Declaração das variáveis
    TLista lista1;
    TLista lista2;
    TProduto item;

    Preencher(&item);

    FLVazia(&lista1);
    FLVazia(&lista2);

    Inserir(item, &lista1);
    Inserir(item, &lista1);

    Imprimir(&lista1);
    Imprimir(&lista2);

    // 5 // 6 // 7 //
}