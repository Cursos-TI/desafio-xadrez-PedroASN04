#include <stdio.h>

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo na diagonal "Cima Direita"
// Esta versão imprime uma direção por chamada, e simula 5 movimentos diagonais.
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função que usa loops aninhados para o movimento do Bispo (extra)
void moverBispoLoopsAninhados(int casas) {
    for (int i = 0; i < casas; i++) { // Loop vertical
        for (int j = 0; j < 1; j++) { // Loop horizontal - só 1 por movimento
            printf("Cima, Direita\n");
        }
    }
}

// Movimento do Cavalo: duas casas para cima e uma para a direita
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentos = 1;
    for (int i = 0; i < movimentos; i++) {
        int casasVerticais = 2;
        int casasHorizontais = 1;

        int vertical = 0;
        while (vertical < casasVerticais) {
            printf("Cima\n");
            vertical++;

            if (vertical == 2) {
                for (int horizontal = 0; horizontal < casasHorizontais; horizontal++) {
                    if (horizontal == 0) {
                        printf("Direita\n");
                        break; // finaliza o movimento em "L"
                    }
                }
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;

    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // Movimento do Bispo (loops aninhados)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoopsAninhados(casasBispo);

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo (loops complexos)
    moverCavalo();

    return 0;
}
