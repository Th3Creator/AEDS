#include <stdio.h>
#include <stdlib.h>
#include "filas.c"
    
void MSG_MENU(){
    printf("\n******************** MENU ***********************");
    printf("\n\t1. ENFILEIRAR");
    printf("\n\t2. DESENFILEIRAR");
    printf("\n\t3. PESQUISAR");
    printf("\n\t4. IMPRIMIR");
    printf("\n\t5. SAIR");
}


int main(){
    // Declaração de variáveis:
    TFila fila;
    TFaux filaAuxiliar;
    TProduto item;
    TCelula *aux;
    TCelula *prox;
    int auxInt;
    int opcao = 0;


    // Inicialização da FILA
    FFVazia(&fila);


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
            LerProduto(&item);
            Enfileirar(item, &fila);

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
            scanf("%d", &item.codigo);

            auxInt = Pesquisar(fila, item);
            if(auxInt == 0){
                printf("NAO ENCONTRADO!!!");
            }
            else{
               Desenfileirar(&fila, &item);
            }   
            
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
            scanf("%d", &item.codigo);

            auxInt = Pesquisar(fila, item);
            if(auxInt == 0){
                printf("NAO ENCONTRADO!!!");
            }
            else{
                ImprimirProduto(item);
            }

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
            scanf("%d", &item.codigo);

            auxInt = Pesquisar(fila, item);
            if(auxInt == 0){
                printf("NAO ENCONTRADO!!!");
            }
            else{
               while (!Vazia(fila)){
                Desenfileirar(&fila, &item);
                ImprimirProduto(item);
                Enfileirar(item, &filaAuxiliar);
            }
            }   
            
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