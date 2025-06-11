#include <stdio.h>
#include <math.h>

// Pares e impares.

void parimp(int, int *, int *);

int main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el numero de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el numero %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }
    printf("\nNumero de pares: %d", PAR);
    printf("\nNumero de impares: %d", IMP);
    return 0;
}

void parimp(int NUM, int *P, int *I)
{
    int RES;
    RES = pow(-1, NUM);
    if (RES > 0)
        (*P)++;
    else if (RES < 0)
        (*I)++;
}
