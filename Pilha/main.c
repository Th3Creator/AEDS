#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"


void MSG_MENU(){
    printf("\n******************** MENU ***********************");
    printf("\n\t1. EMPILHAR");
    printf("\n\t2. DESEMPILHAR");
    printf("\n\t3. PESQUISAR");
    printf("\n\t4. IMPRIMIR");
    printf("\n\t5. SAIR");
}

int main(){
    // Declaração de variáveis:
    TPilha pilha;
    TProduto item;
    TCelula *aux;
    TCelula *prox;
    int opcao = 0;

    // Inicialização da PILHA
    FPVazia(&pilha);


    do
    {
        system("cls");
        MSG_MENU();
        printf("\n\nDIGITE UMA OPCAO:");
        fflush(stdin);
        //fflush(stdin);
        scanf("%d", &opcao);
        
        switch (opcao)
        {
        case 1:
            system("cls");
            
            //

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO ENFILEIRADO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 2:
            system("cls");
            printf("DIGITE O CODIGO DO PRODUTO A SER DESENFILEIRADO:");
            fflush(stdin);
               
            //
            
            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO DESENFILEIRADO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
            break;
        case 3:
            system("cls");
            printf("DIGITE O CODIGO QUE DESEJA PESQUISAR:");
            fflush(stdin);
            
            //

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO PESQUISADO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 4: 
            system("cls");
            printf("DIGITE O CODIGO QUE DESEJA IMPRIMIR:");
            fflush(stdin);
               
            //

            printf("\n\n >>>>>>>>>>>>>>>> MSG: PRODUTO IMPRESSO COM SUCESSO! <<<<<<<<<<<<<<<<");
            //system("PAUSE");
            printf("\n\n >>>>>>>>>>>>>>>>>>>>>>> MSG: PRESSIONE QUALQUER TECLA PARA CONTINUAR! <<<<<<<<<<<<<<<<<<<<<<\n\n");
            fflush(stdin);
            getchar();
            break;
        case 5:
            system("cls");
            // LiberarFila(){}
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
    } while (opcao != 5);


    return 0;
}