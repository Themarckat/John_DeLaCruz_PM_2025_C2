#include <stdio.h>
#include <math.h>

/*Suma de cuadros. */

void main(void)
{
    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);
    while (NUM)
    {
        CUA = pow (NUM, 2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nIngrese un numero -0 para terminar-:\t");
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los cuadros es %ld", SUC);
}
