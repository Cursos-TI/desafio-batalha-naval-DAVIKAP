#include <stdio.h>

int main() {

    // Criação do Tabuleiro 10x10

    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

        printf(" ");
        for(int i = 0; i < 10; i++) {
            printf(" %c", colunas[i]);
        };   
        printf("\n");       
 
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
        };

        // Posicionamento dos navios no tabuleiro 
        
        int i;
        int j;
        
        // Navio horizontal
        
        for (j = 0; j < 3; j++)
        {
        tabuleiro[5][j] = 3;
        }

        // Navio vertical
        
        for (i = 4; i < 7; i++)
        {
        tabuleiro[i][8] = 3;
        }

        // Navios diagonais

        for (i = 3, j = 3; i < 6, j < 6; i++, j++)
        {
        tabuleiro[i][j] = 3;
        }

        for (i = 3, j = 3; i < 6, j < 6; i++, j++)
        {
        tabuleiro[i][j] = 3;
        }

        for (i = 7, j = 2; i < 10, j >= 0; i++, j--)
        {
        tabuleiro[i][j] = 3;
        }
        
        for(i = 0; i < 3; i++) {
           for(j = 0; j < 5; j++){
              if (j >= 2 - i && j <= 2 + i){
                tabuleiro[i][j] = 5;
                }
           }
        }
                
        for(i = 7; i < 10; i++) {
           for(j = 5; j < 10; j++){ 
              if ((i == 7 || i == 9) && (j < 7 || j > 7)){
                tabuleiro[i][j] = 0;
                } else {
                tabuleiro[i][j] = 5;    
                }
           }
        }

        for(i = 0; i < 3; i++) {
           for(j = 7; j < 10; j++){ 
              if ((i == 0 || i == 2) && (j < 8 || j > 8)){
                tabuleiro[i][j] = 0;
                } else {
                tabuleiro[i][j] = 5;    
                }
           }
        }

       // Impressão do tabuleiro com navios posicionados

        for(i = 0; i < 10; i++) {
            printf("%d", i);
            for(j = 0; j < 10; j++){
                printf(" %d", tabuleiro[i][j]);
            }
            printf("\n");       
        }

    return 0;
}
