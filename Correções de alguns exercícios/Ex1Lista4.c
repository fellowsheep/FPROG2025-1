#include <stdio.h>

int main()
{
    // item a)
    // Versão com while
    int cont = 0;
    while (cont <= 100)
    {
        printf("%d ",cont);
        cont++;
    }
    printf("\n\n");
    // Versão com for
    for (cont=0; cont<=100; cont++)
    {
        printf("%d ",cont);
    }
    printf("\n\n");

    //item b)
    cont = 20;
    while (cont <= 50)
    {
        printf("%d ",cont);
        cont = cont + 2;       // cont += 2;
    }
    printf("\n\n");
    for(cont = 20; cont <= 50; cont +=2)
    {
        printf("%d ",cont);
    }
    printf("\n\n");
    // item c)
    for (cont = 70; cont >= 25; cont--)
    {
        printf("%d ",cont);
    }
    printf("\n");

    return 0;
}