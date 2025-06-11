#include <stdio.h>
#include <stdlib.h>

// Cubo 3.

int cubo(int);

int main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de I es: %d", cubo(I));
    return 0;
}

int cubo(int K)
{
    return (K * K * K);
}

