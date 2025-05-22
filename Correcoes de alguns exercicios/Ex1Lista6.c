#include<stdio.h>

#define ROWS 3
#define COLS 5

int main()
{
    int v1[COLS] = {1,5,9,2,5};
    int v2[COLS] = {7,4,13,21,6};
    int v3[COLS] = {8,-3,5,7,12};

    int M[ROWS][COLS];

    for (int j=0; j < COLS; j++)
    {
        M[0][j] = v1[j]; // Primeira linha da matriz recebe o conteúdo de v1 em suas colunas de índice j
        M[1][j] = v2[j]; // Segunda linha da matriz recebe o conteúdo de v2
        M[2][j] = v3[j];
    }

    for (int i=0; i<ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }


    return 0;
}