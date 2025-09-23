#include <stdio.h>

int main() {
    // --- Movimentação da Torre (usando for) ---
    // A Torre move 5 casas para a direita.
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    // --- Movimentação do Bispo (usando while) ---
    // O Bispo move 5 casas na diagonal (para cima e para a direita).
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5;
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- Movimentação da Rainha (usando do-while) ---
    // A Rainha move 8 casas para a esquerda.
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8;
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);
    printf("\n"); 

    return 0;
}