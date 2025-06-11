#include <stdio.h>
#include <stdlib.h>

// Cubo 2.

int cubo(void); // Prototipo de función
int I;          // Variable global

int main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
    return 0;
}

int cubo(void)
{
    int I = 2;
    return (I * I * I);
}
