typedef struct {
    int codigo;
}TProduto;


typedef struct celula{
    TProduto item;
    struct celula* prox;
}TCelula;

typedef struct {
    TCelula *fundo;
    TCelula *topo;
    int tamanho;
}TPilha;


void FPVazia(TPilha *Pilha);