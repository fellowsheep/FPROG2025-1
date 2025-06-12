#include<stdio.h>

// Descrição do cabeçalho
double potenciacao(double base, double expoente);

// Função principal
int main()
{
    double base, expoente, resultado;

    //scanf("%lf %lf",&base,&expoente);

    for (int i= 0; i< 11; i++)
    {
        resultado = potenciacao(2,-i);
        printf("Resultado de 2 ^ %d: %lf\n",-i,resultado);
    }
    return 0;
}

// Implementação das funções descritas acima
double potenciacao(double base, double expoente)
{
    double res = 1.0;

    double exp;

    if (expoente < 0) exp = -expoente;
    else exp = expoente;

    if (expoente == 0)
    {
        return res;
    }
    else
    {
        for(int i=0; i<exp; i++)
        {
            res = res * base;
        }

        if (expoente > 0)
        {
            return res;
        }
        else
        {
            return 1.0/res;
        }
    }
   
}