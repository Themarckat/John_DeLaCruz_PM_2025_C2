#include <stdio.h>
#include <stdlib.h>

/* Billete de ferrocarril.

DIS y TIE: variable de tipo entero
BIL: variable de tipo real. */

void main(void)
{
    int DIS, TIE;
    float BIL;
    printf("Ingrese la distancia entre ciudades y el tiempo de distancia: ");
    scanf("%d %d", &DIS, &TIE);
    if ((DIS*2 > 500) && (TIE > 10))
        BIL = DIS *2 * 0.19 *0.8;
    else
        BIL = DIS * 2 * 0.19;
    printf("\nCosto del billete: %7.2f", BIL);
}
