#include <stdio.h>

/* 
============================================
Funções Recursivas
=========================================
Essas funções simulam os movimentos das peças: 
Torre, Bispo e Rainha usando recursão.
*/

// Função recursiva para o movimento da Torre (em linha reta)
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Condição de parada
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (diagonal)
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return; // Condição de parada
    }
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) {
        return; // Condição de parada
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

/*
==========================================
Loops aninhados para o movimento do Bispo
================================================
O loop externo representa o movimento vertical,
e o loop interno representa o movimento horizontal.
*/
void moverBispoLoop(int casasVerticais, int casasHorizontais) {
    for (int i = 0; i < casasVerticais; i++) {
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Cima, Direita\n");
        }
    }
}

/*
================================
Movimento do Cavalo - Loops complexos
========================================================
O cavalo se move duas casas para cima e uma para a direita (formato "L").
Aqui, usamos loops aninhados, múltiplas variáveis e condições,
incluindo break e continue para controlar o fluxo.
*/
void moverCavalo() {
    int movimentosVerticais = 2; // Duas casas para cima
    int movimentosHorizontais = 1; // Uma casa para a direita

    printf("Movimento do Cavalo:\n");

    // Loop externo controla o movimento vertical
    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            printf("Cima\n");
            continue; // Pula o restante do loop e volta para o próximo movimento
        }
        printf("Cima\n");
    }

    // Loop interno controla o movimento horizontal
    for (int j = 0; j < movimentosHorizontais; j++) {
        if (j > 1) {
            break; // Caso improvável, mas evita movimentos inválidos
        }
        printf("Direita\n");
    }
}

int main() {
    // ========================================================
    // Movimentação da Torre (recursiva)
    // ========================================================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // ===============================
    // Movimentação do Bispo (recursiva)
    // ========================================================
    int casasBispoRecursivo = 5;
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispoRecursivo);

    printf("\n");

    // =========================
    // Movimentação do Bispo (loops aninhados)
    // ========================================================
    int casasVerticais = 5;
    int casasHorizontais = 1;
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoLoop(casasVerticais, casasHorizontais);

    printf("\n");

    // ======
    // Movimentação da Rainha (recursiva)
    // ==================================================
    int casasRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // ===
    // Movimentação do Cavalo (loops complexos)
    // ====================================================
    moverCavalo();

    printf("\nSimulação concluída!\n");
    return 0;
}
