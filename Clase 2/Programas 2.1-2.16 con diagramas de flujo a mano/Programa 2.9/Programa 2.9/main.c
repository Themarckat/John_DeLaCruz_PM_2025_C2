#include <stdio.h>
#include <math.h>

/*Expresion.

R,T y Q: Variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
    float RES;
    int R, T, Q;
    printf(" Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);
    RES = pow(R, 4) - pow(T, 3) + 4 * pow (Q, 2);
    if (RES < 820)
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
}
