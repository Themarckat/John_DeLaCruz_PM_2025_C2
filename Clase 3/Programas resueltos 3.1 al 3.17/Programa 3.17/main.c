#include <stdio.h>
#include <stdlib.h>

/* Numeros perfectos.

I, J, NUM, SUM, C: variables de tipo entero. */

void main(void)
{
    int I, J, NUM, SUM, C = 0;
    printf("%d", &NUM);
    for (I = 1; I <= NUM; I++)
    {
        SUM = 0;
        for (J = 1; J <= (I / 2); J++)
            if ((I % J) == 0)
            SUM += J;
        if (SUM == I)
        {
            printf("\n%d es un numero perfecto", I);
            C++;
        }
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}
