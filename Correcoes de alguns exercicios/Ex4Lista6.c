#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWS 4
#define COLS 6

int main()
{
    srand(time(0));

    int M[ROWS][COLS];

    printf("\n");

    for(int i=0; i < ROWS; i++)
    {
        for(int j=0; j<COLS; j++)
        {
            M[i][j] = -10 + rand() % 21; //Inicializando com valores entre -10 e 10
            printf("%d\t",M[i][j]);
        }
        printf("\n");
    }

    //a) Soma dos elementos da segunda linha - indice 1
    int soma = 0;
    for(int j = 0; j < COLS; j++)
    {
        soma = soma + M[1][j];    // soma += M[1][j];
    }

    printf("Soma dos elementos da 2a linha: %d\n",soma);

    //b) Somar os elementos da quinta coluna - indice 4
    soma = 0;
    for(int i=0; i<ROWS; i++)
    {
        soma = soma + M[i][4];
    }

    printf("Soma dos elementos da 5a coluna: %d\n",soma);

    return 0;
}