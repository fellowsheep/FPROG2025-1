#include <stdio.h>

int main()
{
    float a, b, res=0.0;
    char operacao;
    int sucesso = 1;   // 0 não teve sucesso, 1 teve sucesso 
                       // Assume que vai ser sucedido
    
    printf("Digite o primeiro nro: ");
    scanf("%f",&a); //Lê o primeiro valor e armazena na variável a
    printf("Digite o segundo nro: ");
    scanf("%f",&b); //Lê o segundo valor e armazena na variável b
    
    printf("Digite a operação matemática (+, -, *, /): ");
    scanf(" %c",&operacao); //Lê o caractere e armazena na variável operacao 
    
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
            sucesso = 0; // não teve sucesso na operação
        }
    }
    else
    {
        printf("Operação inválida!\n");
        sucesso = 0; // não teve sucesso na operação
    }
    
    if (sucesso == 1)
    {
        printf("O resultado é %f",res);
    }
    
    return 0;
}
