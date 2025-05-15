#include <stdio.h>

int main() {
    // Quantidade de casas a serem movidas para cada peça
    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    // --- Movimento da Torre (5 casas para a direita, usando for) ---
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // --- Movimento do Bispo (5 casas na diagonal cima-direita, usando while) ---
    printf("\nMovimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    // --- Movimento da Rainha (8 casas para a esquerda, usando do-while) ---
    printf("\nMovimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // --- Movimento do Cavalo (2 casas para baixo e 1 para a esquerda, usando loops aninhados) ---
    printf("\nMovimento do Cavalo:\n");

    int i, j;

    // Loop externo com for para mover duas vezes para baixo
    for (i = 1; i <= 2; i++) {
        printf("Baixo (%d)\n", i);

        // Loop interno com while para mover uma vez para a esquerda (apenas na última repetição)
        if (i == 2) {
            int k = 1;
            while (k <= 1) {
                printf("Esquerda (%d)\n", k);
                k++;
            }
        }
    }

    return 0;
}
