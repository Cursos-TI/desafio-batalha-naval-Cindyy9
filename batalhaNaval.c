#include <stdio.h>
#define linha 10
#define coluna 10

int main() {
    int tabuleiro[linha][coluna];

    // Preenche o tabuleiro com 0
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < linha; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Mostra o tabuleiro
    for(int i = 0; i < linha; i++) {
        for(int j = 0; j < linha; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Imprime os rótulos das colunas (A, B, C)
    printf("  A B C D E F G H I J \n");

     // Coloca o navio nas posições 
     tabuleiro[2][2] = 4;
     tabuleiro[2][3] = 4;
     tabuleiro[2][4] = 4;
     //segundo navio
     tabuleiro[4][0] = 4;
     tabuleiro[5][0] = 4;
     tabuleiro[6][0] = 4;
 
     //terceiro navio
     tabuleiro[0][7] = 4;
     tabuleiro[0][8] = 4;
     tabuleiro[0][9] = 4;

     //quarto navio
     tabuleiro[7][6] = 4;
     tabuleiro[8][6] = 4;
     tabuleiro[9][6] = 4;

     // Imprime os rótulos das colunas
     printf("   "); // Espaço para alinhar com os números das linhas
     for (char letra = 'A'; letra < 'A' + coluna; letra++) {
         printf(" %c", letra);
     }
     printf("\n");
 
     // Imprime o tabuleiro com rótulo das linhas
     for (int i = 0; i < linha; i++) {
         printf("%2d ", i + 1); // Número da linha
         for (int j = 0; j < coluna; j++) {
             printf(" %d", tabuleiro[i][j]);
         }
         printf("\n");
     }
 
     
    return 0;
}
