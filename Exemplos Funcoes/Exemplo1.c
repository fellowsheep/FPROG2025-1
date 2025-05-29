#include<stdio.h>
#include<string.h>

// Função que não retorna valor (tipo void) e não possui argumentos (parâmetros)
void escreverMsg()
{
    printf("Ola mundo!\n");
}

void escreverMsgPersonalizada(char msg[])
{
    printf("%s\n",msg);
}

// Função que retorna um inteiro e 
// recebe como argumentos dois inteiros, a e b
int somar(int a, int b) //a e b são variáveis temporárias, que recebem os valores conforme a chamada da função
{
    int res = a + b;
    return res; // o tipo de retorno precisa ser o mesmo declarado no cabeçalho da função
}

float calcularMedia(float grauA, float grauB)
{
    float res = (grauA + 2* grauB)/3.0;
    return res;
}

double converterMinParaS(int minutos)
{
    double res = minutos * 60;
    return res;
}

int main()
{

    escreverMsg(); //chamada para a função escreverMsg

    for (int i=0; i<10; i++) 
    {
        escreverMsg();
    }

    int soma = somar(2,3);
    //...
    printf("%d\n",soma);
    int x=0, y=10;
    printf("%d\n",somar(x,y));
    
    if (somar(x,2) > 0)
    {
        printf("Maior que zero!\n");
    }

    escreverMsgPersonalizada("Ola Rossana!");

    float media = calcularMedia(7.5,9.8);
    printf("%f\n",media);

    printf("5 minutos correspondem a %lf segundos\n",converterMinParaS(5));

    return 0;
}