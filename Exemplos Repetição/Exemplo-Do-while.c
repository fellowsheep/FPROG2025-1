#include <stdio.h>
#include <ctype.h>

int main() 
{
    char opcao;

    do 
    {
        printf("Você aceita nossos termos:? (S/N)");
        scanf(" %c",&opcao);
        opcao = toupper(opcao);

    } while (opcao != 'S' && opcao != 'N');

    return 0;
}