/*
* Programa: Nome_do_Programa.c
* Descrição: [Breve descrição do que o programa faz.]
* Autor: [Seu Nome]
* Data de criação: [Data de Criação]
* Última modificação: [Data da Última Modificação]
*
* Observações:
* - [Qualquer detalhe adicional ou dica importante.]
*/

#include <stdio.h>

int main()
{
    int tempo_em_minutos, tempo_em_segundos; // declaração de variáveis
    
    //Entrada de dados - pedir o tempo em minutos para o usuário - scanf
    printf("Digite o tempo em minutos: "); //mensagem para usuário
    scanf("%d",&tempo_em_minutos); //fazendo a leitura da entrada do usuário e armazenando em tempo_em_minutos
    
    //Processamento - converter o tempo em minutos em tempo_em_segundos
    tempo_em_segundos = tempo_em_minutos * 60;
    
    //Saída de dados - imprimir o valor de tempo_em_segundos na tela
    printf("O tempo em segundos é %d\n", tempo_em_segundos);
    printf("%d minutos correspondem a %d segundos",tempo_em_minutos,tempo_em_segundos);

    return 0;
}
