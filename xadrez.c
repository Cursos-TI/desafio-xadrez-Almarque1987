#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Movimento da Torre: 5 casas para a direita
    //printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n", i);
    }
    // Movimento da Rainha: 8 casas para a esquerda
    //printf("\nMovimento da Rainha:\n");
    for (int i = 1; i <= 8; i++) {
        printf("esquerda\n", i);
    } 
    //Movimento do Bispo: 5 casas na diagonal superior direita
    //printf("\nMovimento do Bispo:\n");
    for (int i = 1; i <= 5; i++) {
        // Condição especial para mostrar a direção
        printf("Diagonal Superior, Direita\n", i);
    }
    
     // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Movimento do cavalo: 2 casas para baixo e 1 para a esquerda
    
    printf("\nMovimento do Cavalo:\n");
    int movimentosbaixo = 2;
    int movimentosesquerda = 1;
    for (int i = 1; i <= movimentosbaixo; i++) {
        printf("Baixo\n", i);
    }
    for (int j = 1; j <= movimentosesquerda; j++) {
        printf("Esquerda\n", j);
    }
     return 0;
}
   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
