#include<stdio.h>
#include "Matematica.h"

//
// gcc Exemplo2Biblioteca.c Matematica.c -o Exemplo2Bilioteca
//


// Função principal
int main()
{
    double resultado;

    for (int i= 0; i< 11; i++)
    {
        resultado = potenciacao(2,-i);
        printf("Resultado de 2 ^ %d: %lf\n",-i,resultado);
    }
    return 0;
}
