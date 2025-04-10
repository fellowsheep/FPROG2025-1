#include <stdio.h>

int main()
{
    int cont = 1;

    while (cont <= 10)
    {
        printf("%d\n", cont);
        cont = cont + 1; //incremento de valor
    }

    printf("Valor final do cont = %d\n",cont);

    getchar();

    return 0;
}