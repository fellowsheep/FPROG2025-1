#include <stdio.h>
#include <stdlib.h> //Para o rand() e srand()
#include <time.h>

int main()
{
    srand(time(0)); // Só precisa 1x - Usa a hora do sistema como semente para a geração aleatória

    int min, max;
    int sorteado;
    min = 1;
    max = 100;

    int comuns = 0, especiais = 0, raros = 0, lendarios = 0;
    // Comum - 60%
    // Especial - 25%
    // Raro - 10%
    // Lendário - 5%

    for (int i = 0; i < 100; i++)
    {

        sorteado = min + rand() % (max - min + 1);

        printf("Você ganhou um presente! \n Tipo de presente: ");

        if (sorteado <= 60)
        {
            printf("COMUM! \n");
            comuns++;
        }
        else if (sorteado <= 85)
        {
            printf("ESPECIAL! \n");
            especiais++;
        }
        else if (sorteado <= 95)
        {
            printf("RARO! \n");
            raros++;
        }
        else
        {
            printf("LENDÁRIO! \n");
            lendarios++;
        }
    }

    printf("Quantidade de presentes comuns: %d\n",comuns);
    printf("Quantidade de presentes especiais: %d\n",especiais);
    printf("Quantidade de presentes raros: %d\n",raros);
    printf("Quantidade de presentes lendários: %d\n",lendarios);

    return 0;
}