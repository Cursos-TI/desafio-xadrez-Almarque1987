#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo (5 casas na diagonal superior direita)
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Diagonal Superior, Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função com loops aninhados para o Bispo (vertical + horizontal)
void moverBispoComLoops(int vertical, int horizontal) {
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    for (int i = 1; i <= vertical; i++) {
        for (int j = 1; j <= horizontal; j++) {
            printf("Diagonal Superior, Direita\n");
        }
    }
}

// Movimento do Cavalo com loops aninhados e controle de fluxo
void moverCavaloComControle() {
    printf("\nMovimento do Cavalo (com loops e controle):\n");

    int cima = 2;
    int direita = 1;
    int movimentosFeitos = 0;

    for (int i = 1; i <= cima + direita; i++) {
        for (int j = 1; j <= 1; j++) { // loop interno apenas para ilustrar aninhamento
            if (movimentosFeitos < cima) {
                printf("Cima\n");
                movimentosFeitos++;
                continue;
            }

            if (movimentosFeitos == cima) {
                printf("Direita\n");
                break;
            }
        }
    }
}

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   
    printf("\nDESAFIO MESTRE\n");
    printf("\n/ Desafio de Xadrez - MateCheck (Versão Avançada)\n");

    // Torre com recursividade
    printf("\nMovimento da Torre (Recursivo):\n");
    moverTorre(5);

    // Rainha com recursividade
    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainha(8);

    // Bispo com recursividade
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(5);

    // Bispo com loops aninhados
    moverBispoComLoops(2, 2); // exemplo: 2 verticais e 2 horizontais

    // Cavalo com loops e controle de fluxo
    moverCavaloComControle();

    return 0;
}