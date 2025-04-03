#include <stdio.h>

int main()
{
    int cont = 0;

    while (cont < 10)
    {
         cont = cont + 1; //incremento de valor
         printf("%d\n", cont);
    }

    getchar();

    return 0;
}