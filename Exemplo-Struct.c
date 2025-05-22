#include<stdio.h>
#include <string.h>

#define MAX_CLIENTES 100
#define MAX_STR 50


//Fazer a definição da struct como se fosse um novo tipo de dado
typedef struct {
    char nome[MAX_STR];
    int idade;
    float altura;
} Pessoa;

int main()
{
    //Declarando uma variável do "tipo" pessoa
    Pessoa p;
    //Para cada campo da struct, usamos .
    strcpy(p.nome,"Ana");
    p.idade = 21;
    p.altura = 1.65;

    //Declarando um array de variáveis do "tipo" Pessoa
    Pessoa clientes[MAX_CLIENTES];
    int nroClientes = 0;

    // "Cadastrar a Ana"
    clientes[0] = p;
    nroClientes++; //1

    //"Cadastrar João"
    strcpy(clientes[1].nome, "Joao");
    clientes[1].idade = 19;
    clientes[1].altura = 1.7;
    nroClientes++; //2

    //"Cadastrar" mais 3 clientes lendo do teclado
    for(int i=2; i<5; i++)
    {
        //Leitura de uma string
        scanf("%s",&clientes[i].nome);
        scanf("%d", &clientes[i].idade);
        scanf("%f",&clientes[i].altura);
        nroClientes++;
    }

    //Percorrer o array somente nas posicoes com clientes cadastrados (nroClientes)
    for(int i=0; i<nroClientes; i++)
    {
        printf("Cliente %d:\n", i+1);
        printf("Nome: %s\n",clientes[i].nome);
        printf("Idade: %d\n",clientes[i].idade);
        printf("Altura: %f\n",clientes[i].altura);
        printf("---\n");
    }

    return 0;
}