#include <stdio.h>
#include <stdlib.h>

// Maximo comun divisor.

int mcd(int, int);

int main(void)
{
    int NU1, NU2, RES;
    printf("\nIngresa los dos numeros enteros: ");
    scanf("%d %d", &NU1, &NU2);
    RES = mcd(NU1, NU2);
    printf("\nEl maximo comun divisor de %d y %d es: %d", NU1, NU2, RES);
    return 0;
}

int mcd(int N1, int N2)
{
    int I;
    if (N1 < N2)
        I = N1 / 2;
    else
        I = N2 / 2;

    while ((N1 % I != 0) || (N2 % I != 0))
    {
        I--;
    }
    return I;
}
