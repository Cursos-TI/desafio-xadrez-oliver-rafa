#include <stdio.h>

int main() {
    // Movimento da Torre.
    printf("Movimento da Torre:\n");
    int casas_torre = 3;
    
    // Torre movendo para a direita.
    for(int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separar.
    
    // Movimento do Bispo.
    printf("Movimento do Bispo:\n");
    int casas_bispo = 2;
    int contador = 0;
    
    // Bispo movendo na diagonal (cima + direita)
    while(contador < casas_bispo) {
        printf("Cima\n");
        printf("Direita\n");
        contador++;
    }
    
    printf("\n"); // Linha em branco para separar.
    
    // MOVIMENTO DO CAVALO !!
    printf("Movimento do Cavalo:\n");
    
    // Definindo o movimento do Cavalo: 2 casas para baixo, 1 casa para esquerda
    int casas_baixo = 2;
    int casas_esquerda = 1;
    
    // Loop for para as 2 casas para baixo.
    for(int movimento_vertical = 0; movimento_vertical < casas_baixo; movimento_vertical++) {
        printf("Baixo\n");
    }
    
    // Loop while para a 1 casa para esquerda.
    int movimento_horizontal = 0;
    while(movimento_horizontal < casas_esquerda) {
        printf("Esquerda\n");
        movimento_horizontal++;
    }
    
    return 0;
}