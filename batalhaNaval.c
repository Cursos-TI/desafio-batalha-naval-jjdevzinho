#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro com 0 (água)
    int navioHorizontal[3] = {3, 3, 3}; // Navio horizontal de tamanho 3
    int navioVertical[3] = {3, 3, 3}; // Navio vertical de tamanho 3

    // Posiciona o navio horizontal na linha 2, colunas 3 a 5
    for (int i = 0; i < 3; i++) {
        tabuleiro[4][3 + i] = navioHorizontal[i];
    }

    // Posiciona o navio vertical na coluna 5, linhas 5 a 7
    for (int i = 0; i < 3; i++) {
        tabuleiro[3 + i][7] = navioVertical[i];
    }

    // Exibe o tabuleiro
    printf(" # A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d", i + 1); // Imprime o número da linha
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]); // Imprime o valor da célula
        }
        printf("\n");
    }

    return 0;
}
