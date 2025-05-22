#include <stdio.h>

#define MAX_LINHAS 3
#define MAX_COLUNAS 3

int main()
{
    char tabuleiro[MAX_LINHAS][MAX_COLUNAS] = { 'O', 'X', 'O',
                                                'X', 'O', 'X',
                                                'X', 'X', 'O'
    };

    tabuleiro[2][2] = 'X';

    for(int i=0; i < MAX_LINHAS; i++) //percorre as linhas com o indice i
    {
        for(int j=0; j <MAX_COLUNAS; j++) //percorre as colunas com o indice j
        {
            printf ("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}