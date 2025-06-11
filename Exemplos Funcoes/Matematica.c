#include "Matematica.h"  //nossa biblioteca com as descrição dos cabeçalhos

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