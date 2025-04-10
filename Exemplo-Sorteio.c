#include <stdio.h>
#include <stdlib.h> //Para o rand() e srand()
#include <time.h>

int main()
{
    int min,max;
    int sorteado;
    min = 0;
    max = 10;

    srand(time(0));

    for(int cont = 0; cont <5; cont++)
    {
        sorteado = min + rand() % (max - min + 1);
        printf("%d ",sorteado);
    }


    return 0;
}