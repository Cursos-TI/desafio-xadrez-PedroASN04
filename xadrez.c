#include <stdio.h>

int main() {
    // Quantidade de casas a serem movidas
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

    return 0;
}
