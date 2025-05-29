#include<stdio.h>
#include<stdbool.h>

char ExibirMenu()
{
    printf("********MENU PRINCIPAL*************\n");
    printf("1 - Executar tarefa 1\n");
    printf("2 - Executar tarefa 2\n");
    printf("3 - Executar tarefa 3\n");
    printf("4 - Sair do programa\n");
    
    char opcao;
    bool valida;
    do
    {
        printf("Digite uma opcao: ");
        scanf(" %c",&opcao);
        valida = true;
        if (opcao!= '1' && opcao!='2' && opcao!='3' && opcao!='4')
        {
            printf("Opcao invalida!\n");
            valida = false;
        }
    } while (valida == false);

    return opcao;
}

void executarTarefa1()
{
    printf("Executando a tarefa 1\n");
    // Aqui faz tudo que precisar na tarefa 1;;;;
}

void executarTarefa2()
{
    printf("Executando a tarefa 2\n");
    // Aqui faz tudo que precisar na tarefa 2;;;;
}

void executarTarefa3()
{
    printf("Executando a tarefa 3\n");
    // Aqui faz tudo que precisar na tarefa 3;;;;
}

int main()
{
    char opcao;
    do {
        opcao = ExibirMenu();
        switch(opcao)
        {
            case '1':
                executarTarefa1();
                break;
            case '2':
                executarTarefa2();
                break;
            case '3':
                executarTarefa3();
                break;
            case '4':
                printf("Saindo do programa!\n");
                break;
        }
    } while (opcao != '4');
    return 0;
}