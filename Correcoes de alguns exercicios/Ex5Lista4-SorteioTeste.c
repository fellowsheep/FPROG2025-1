#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int x; //nro de alunos
    float GA, GB, GC, GF;
    float mediaGeral;
    float somaNotas = 0.0; // como é um acumulador, precisa inicializar

    // Leitura do nro de alunos
    printf("Nro de alunos: ");
    scanf("%d",&x);

    // Para os x alunos...
    for(int i=0; i< x; i++)
    {
        //Ler notas do Grau A e do Grau B do aluno i
        //printf("Aluno %d, digite as notas do GA e do GB: ",i+1);
        printf("Aluno %d:\n",i+1);
        //scanf("%f %f",&GA,&GB);
        // Sortear nro entre 0 e 10, com 1 casa decimal
        GA = rand() % 101 / 10.0;
        GB = rand() % 101 / 10.0;
        printf("GA: %.1f -- GB: %.1f\n",GA,GB);
        GF = (GA + 2*GB)/3.0;
        if (GF >= 6.0)
        {
            printf("APROVADO! \n");
        }
        else
        {
            printf("EM GRAU C\n");
            //printf("Digite qual o grau a substituir (A ou B): ");
            char grau;
            //scanf(" %c",&grau);
            int n = rand() % 2;
            if (n == 0) { grau = 'A';}
            else { grau = 'B'; }
            grau = toupper(grau); //transforma pra maiúscula
            printf("Aluno quis substituir o Grau %c\n",grau);
            //printf("Digite a nota do GC: ");
            //scanf("%f",&GC);
            GC = rand() % 101 / 10.0;
            printf("GC: %.1f\n",GC);

            if (grau == 'A')
            {
                GF = (GC + 2*GB) / 3.0; 
            }
            else if (grau == 'B')
            {
                GF = (GA + 2 * GC)/3.0;
            }
            if (GF >= 6.0)
            {
                printf("APROVADO! \n");
            }
            else
            {
                printf("REPROVADO!\n");
            }
        }
        printf("Grau Final: %.1f\n--------------------\n",GF);
        somaNotas = somaNotas + GF;   // somaNotas += GF;
    }

    // Calcula a média geral da turma
    mediaGeral = somaNotas / x;

    // Imprime a média geral
    printf("Média geral: %.1f\n\n",mediaGeral);

    return 0;
}