#include <stdio.h>
#include <stdlib.h>

// Prueba de par�metros por referencia.

void f1(int *);

int main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funci�n: %d", ++K);
        f1(&K);
        printf("\nValor de K despu�s de llamar a la funci�n: %d", K);
    }
    return 0;
}

void f1(int *R)
{
    *R += *R;
}
