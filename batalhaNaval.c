#include <stdio.h>

int main() {

    // Criação do Tabuleiro 10x10

    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};

        printf(" ");
        for(int i = 0; i < 10; i++) {
            printf("%c", colunas[i]);
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

        for (j = 2; j < 5; j++)
        {
        tabuleiro[1][j] = 3;
        }

        // Navio vertical
        
        for (i = 5; i < 8; i++)
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
        
       // Impressão do tabuleiro com navios posicionados

        for(i = 0; i < 10; i++) {
            printf("%d", i);
            for(j = 0; j < 10; j++){
                printf("%d", tabuleiro[i][j]);
            }
            printf("\n");       
        }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.




    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
