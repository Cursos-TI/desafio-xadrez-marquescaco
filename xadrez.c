#include <stdio.h>

#define BISPO_MOV 5   // Constante para o número de movimentos do Bispo
#define TORRE_MOV 5   // Constante para o número de movimentos da Torre
#define RAINHA_MOV 8  // Constante para o número de movimentos da Rainha

int main() {
    int i; // Variável para controle das repetições

    // Movimentação do Bispo: 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    for (i = 0; i < BISPO_MOV; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    // Movimentação da Torre: 5 casas para a direita
    printf("\nMovimentação da Torre:\n");
    i = 0; // Reinicializa a variável de controle
    while (i < TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    i = 0; // Reinicializa a variável de controle
    do {
        printf("Esquerda\n");
        i++;
    } while (i < RAINHA_MOV);

    return 0;
}
