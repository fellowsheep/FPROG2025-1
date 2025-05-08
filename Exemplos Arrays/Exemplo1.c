#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main()
{
    int A[TAM] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tamanho = sizeof(A) / sizeof(A[0]);
    printf("Tamanho do array: %d\n",tamanho);
    printf("Tamanho em bytes do array: %d\n",sizeof(A));
    printf("Tamanhho em bytes do int: %d\n", sizeof(A[0]));
    printf("Quinto elemento do array: %d\n",A[4]);
    printf("Primeiro elemento do array: %d\n", A[0]);
    printf("Elemento de índice 3: %d\n", A[3]);
    printf("Nono elemento do array: %d\n", A[8]);
    A[8] = 99;
    A[0] = A[1] + A[2];

    printf("-------------------\n");

    for (int i=0; i < tamanho; i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }
    
    
   
    int B[TAM]; 
    

    

    return 0;
}
