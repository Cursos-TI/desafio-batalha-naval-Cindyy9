#include <stdio.h>

int main() {
    int tabuleiro[5][5];

    // Preenche o tabuleiro com 0
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Mostra o tabuleiro
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
