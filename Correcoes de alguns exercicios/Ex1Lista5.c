#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 50

int main()
{
    srand(time(0));

    // Inicializar um vetor v com 10 números entre min=10 e max=90
    // min + rand % (max - min + 1)
    int v[TAM];
    for(int i=0; i < TAM; i++)
    {
        v[i] = 10 + rand() % 81;
        printf("v[%d] = %d  ",i,v[i]);
    }

    printf("\n\n");

    // b) Verificar se existe o valor 50
    bool achou = false;
    for(int i=0; i<TAM; i++)
    {
        if (v[i] == 50)
        {
            achou = true;
        }
    }

    // Solução mais elegante: while e flag
    achou = false;
    int i= 0;
    while (i < TAM && achou == false) // !(achou) <---> achou == false
    {
        if (v[i] == 50)
        { 
            achou = true;
            printf("Percorreu até o indice %d\n", i);

        }
        i++;
    }

    if (achou == true)   // if (achou) 
    {
        printf("Encontrou o nro 50!\n");
    }
    else
    {
        printf("Não encontrou o nro 50!\n");
    }

    printf("\n------------------\n");

    //c) contar as ocorrencias do valor 50 em v
    int cont = 0;
    for(int i=0; i<TAM; i++)
    {
        if (v[i] == 50)
        {
            cont++;
        }
    }

    printf("Foram encontradas %d ocorrencias do valor 50.\n",cont);

    // d) Calcular a média dos valores do vetor
    printf("\n------------------\n");
    int soma = 0;
    float media;
    for(int i=0; i<TAM; i++)
    {
        soma = soma + v[i];   // soma += v[i];
    }
    media = soma / (float) TAM; //cast no denominador para transformá-lo em float
    printf("A media é %.2f\n", media);

    //e) encontrar maior e menor valor
    printf("\n------------------\n");
    int maior = v[0], menor = v[0];
    int i_maior=0, i_menor = 0;
    for(int i=1; i<TAM; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
            i_maior = i;
        }

        if (v[i] < menor)
        {
            menor = v[i];
            i_menor = i;
        }
    }

    printf("O maior valor encontrado foi %d no indice %d\n",maior,i_maior);
    printf("O menor valor encontrado foi %d no indice %d\n",menor,i_menor);

    return 0;
}