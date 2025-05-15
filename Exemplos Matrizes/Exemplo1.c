#include <stdio.h>

int main()
{
    char tabuleiro[3][3] = { 'O', 'X', 'O',
                             'X', 'O', 'X',
                             'X', 'X', 'O'
    };

    tabuleiro[2][2] = 'X';

    for(int i=0; i < 3; i++) //percorre as linhas com o indice i
    {
        for(int j=0; j <3; j++) //percorre as colunas com o indice j
        {
            printf ("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}