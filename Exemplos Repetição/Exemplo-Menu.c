#include <stdio.h>
#include <stdbool.h> //para poder usar o tipo de dados bool

int main()
{
    float a, b, res = 0.0;
    char operacao = '\0'; //inicializar a varável que será usada na condição
    bool sucesso = true; // 0 não teve sucesso, 1 teve sucesso
                     // Assume que vai ser sucedido

    while (operacao != 'S')
    {

        printf("Digite a operação matemática: \n");
        printf("+ - Somar dois nros\n");
        printf("- - Subtrair dois nros\n");
        printf("* - Multiplicar dois nros\n");
        printf("/ - Dividir dois nros\n");
        printf("S - Sair do programa\n");
        printf("Digite aqui: ");
        scanf(" %c", &operacao); // Lê o caractere e armazena na variável operacao

        if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/')
        {
            printf("Digite o primeiro nro: ");
            scanf("%f", &a); // Lê o primeiro valor e armazena na variável a
            printf("Digite o segundo nro: ");
            scanf("%f", &b); // Lê o segundo valor e armazena na variável b
        }

        sucesso = true; //reassume que sucesso é verdadeiro

        if (operacao == '+')
        {
            res = a + b;
        }
        else if (operacao == '-')
        {
            res = a - b;
        }
        else if (operacao == '*')
        {
            res = a * b;
        }
        else if (operacao == '/')
        {
            if (b != 0.0)
            {
                res = a / b;
            }
            else
            {
                printf("Divisão por zero não existe!\n");
                sucesso = false; // não teve sucesso na operação
            }
        }
        else if (operacao == 'S')
        {
            printf("Saindo do programa!\n");
            sucesso = false;
        }
        else
        {
            printf("Operação inválida!\n");
            sucesso = false; // não teve sucesso na operação
        }

        if (sucesso == true)
        {
            printf("O resultado é %f", res);
        }

        printf("\n\n");
    }

    return 0;
}
