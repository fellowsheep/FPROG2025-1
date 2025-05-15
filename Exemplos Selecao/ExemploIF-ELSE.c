#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    
    //if (idade > 17) //testa se a pessoa tem 18 anos ou mais
    if (idade >= 18)
    {
        printf("Você é maior de idade!\n");        
    }
    else //se for menor que 18
    {
        printf("Você é menor de idade\n");
    }
    printf("FIM");
    return 0;
}