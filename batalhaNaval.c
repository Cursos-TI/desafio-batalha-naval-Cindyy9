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

    
    printf("      BATALHA NAVAVAL\n");

     // Coloca o navio nas posições diagonal
     tabuleiro[2][2] = 4;
     tabuleiro[3][3] = 4;
     tabuleiro[4][4] = 4;
     
     //segundo navio vertical
     tabuleiro[4][0] = 4;
     tabuleiro[5][0] = 4;
     tabuleiro[6][0] = 4;
 
     //terceiro navio horizontal
     tabuleiro[0][7] = 4;
     tabuleiro[0][8] = 4;
     tabuleiro[0][9] = 4;
     
     //quarto navio diagonal
     tabuleiro[7][6] = 4;
     tabuleiro[8][5] = 4;
     tabuleiro[9][4] = 4;

     //Adicionando o cone
     tabuleiro[5][9] = 1;
     tabuleiro[5][8] = 1;
     tabuleiro[5][7] = 1;
     tabuleiro[5][6] = 1;
     tabuleiro[5][5] = 1;
     //camadas do cone
     tabuleiro[4][6] = 2;
     tabuleiro[4][7] = 2;
     tabuleiro[4][8] = 2;
     tabuleiro[3][7] = 2;

     //Adicionando o octaedro
     tabuleiro[8][1] = 2;
     tabuleiro[8][2] = 2;
     tabuleiro[8][3] = 2;
     tabuleiro[9][2] = 2;
     tabuleiro[7][2] = 2;

     //Adicionando a cruz
     tabuleiro[0][5] = 3;
     tabuleiro[1][7] = 3;
     tabuleiro[1][6] = 3;
     tabuleiro[1][5] = 3;
     tabuleiro[1][4] = 3;
     tabuleiro[1][3] = 3;
     tabuleiro[2][5] = 3;

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
