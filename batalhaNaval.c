#include <stdio.h>
#define linhas 10
#define colunas 10

int main() {

    int tabuleiro[linhas][colunas];

    //Preenche o 0 do tabuleiro
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0;
        }
        
    }
    
    printf("      BATALHA NAVAL\n");

    //Coloca o primeiro navio na posição diagonal
    tabuleiro[2][2] = 4;
    tabuleiro[3][3] = 4;
    tabuleiro[4][4] = 4;

    //segundo navio na vertical
    tabuleiro[4][0] = 4;
    tabuleiro[5][0] = 4;
    tabuleiro[6][0] = 4;

    //terceiro navio na horizontal
    tabuleiro[0][7] = 4;
    tabuleiro[0][8] = 4;
    tabuleiro[0][9] = 4;

    //quarto navio na diagonal
    tabuleiro[7][6] = 4;
    tabuleiro[8][5] = 4;
    tabuleiro[9][4] = 4;

    //adicionando o cone
    tabuleiro[5][9] = 1;
    tabuleiro[5][8] = 1;
    tabuleiro[5][7] = 1;
    tabuleiro[5][6] = 1;
    tabuleiro[5][5] = 1;
    tabuleiro[4][6] = 1;
    tabuleiro[4][7] = 1;
    tabuleiro[4][8] = 1;
    tabuleiro[3][7] = 1;

    //adicionando octeadro
    tabuleiro[8][1] = 2;
    tabuleiro[8][2] = 2;
    tabuleiro[8][3] = 2;
    tabuleiro[9][2] = 2;
    tabuleiro[7][2] = 2;

    //adicionando a cruz
    tabuleiro[0][5] = 3;
    tabuleiro[1][7] = 3;
    tabuleiro[1][6] = 3;
    tabuleiro[1][5] = 3;
    tabuleiro[1][4] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[2][5] = 3;

    //Imprime os rotulos das colunas
    printf("  ");//Espaço para alinar com os números das linha
    for (char letra = 'A'; letra < 'A' + colunas; letra++){
        printf(" %c", letra);
    }
    printf("\n");

    for (int i = 0; i < linhas; i++){
        printf("%2d", i + 1); //numero da linha
        for (int j = 0; j < colunas; j++){
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    


}