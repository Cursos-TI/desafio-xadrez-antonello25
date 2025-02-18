#include <stdio.h>

int main() {
    int torre, bispo = 5, rainha = 8;    //Declaração de variáveis

    printf("============= DESAFIO XADREZ =============\n");
    printf("------ Movimentação da Torre ------\n");
    for(torre = 5; torre >= 1; torre--){    //Movimentação da torre
        printf("Direita\n");
    }

    printf("------ Movimentação do Bispo ------\n");   //Movimentação do bispo
    do{
        printf("Cima,Direita\n");
        bispo--;
    } while(bispo >= 1);

    printf("------ Movimentação da Rainha ------\n");   //Movimentação da rainha
    while(rainha >= 1){
        printf("Esquerda\n");
        rainha--;
    }

    return 0;
}
