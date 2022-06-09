#include <stdio.h>
#include <stdlib.h>
#include "listas.c"

void MSG_MENU(){
    printf("\n******************** MENU ***********************");
    printf("\n\t1. INSERIR");
    printf("\n\t2. PESQUISAR");
    printf("\n\t3. EXCLUIR");
    printf("\n\t4. ALTERAR");
    printf("\n\t5. IMPRIMIR");
    printf("\n\t6. SAIR");
}

int main()
{
    // Declaração de variáveis:
    TLista lista;
    TProduto item;
    TCelula *aux;
    TCelula *prox;
    int indice;


    // Inicialização da lista
    FLVazia(&lista);

    int opcao = 0;
    do
    {
        system("cls");
        MSG_MENU();
        printf("\n\nDIGITE UMA OPCAO:");
        fflush(stdin);
        //fflush(stdin);
        scanf("%d", &opcao);

        switch(opcao)
        {
        case 1:
            system("cls");
            LerProduto(&item);
            Inserir(item, &lista);

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO INSERIDO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 2:
            system("cls");
            printf("DIGITE O CODIGO:");
            fflush(stdin);
            scanf("%d", &item.codigo);

            aux = Pesquisar(lista, item);
            if(aux == NULL){
                printf("NAO ENCONTRADO!!!");
            }
            else{
                ImprimirProduto(aux->prox->item);
            }

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO PESQUISADO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 3:
            system("cls");
            printf("DIGITE O CODIGO DO PRODUTO A SER EXCLUIDO:");
            fflush(stdin);
            scanf("%d", &item.codigo);

            aux = Pesquisar(lista, item);
            if(aux == NULL){
                printf("NAO ENCONTRADO!!!");
            }
            else{
                Excluir(&lista, &item);
            }

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO EXCLUIDO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 4:
            system("cls");
            printf("DIGITE O CODIGO DO PRODUTO A SER ALTERADO:");
            fflush(stdin);
            scanf("%d", &item.codigo);

            aux = Pesquisar(lista, item);
            if(aux == NULL){
                printf("NAO ENCONTRADO!!!");
            }
            else{
                AlterarProduto(&item);
            }

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO ALTERADO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 5:
            system("cls");
            printf("DIGITE O CODIGO DO PRODUTO A SER IMPRESSO:");
            fflush(stdin);
            scanf("%d", &item.codigo);

            aux = Pesquisar(lista, item);
            if(aux == NULL){
                printf("NAO ENCONTRADO!!!");
            }
            else{
                ImprimirProduto(item);
            }       

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO INSERIDO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 6:
            system("cls");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: SAINDO DO SISTEMA! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        default:
            system("cls");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: DIGITE UMA OPCAO VALIDA! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
        }
    } while(opcao != 6);

    return 0;
}
