#include <stdio.h>
#include <stdlib.h>

// Conflicto de variables con el mismo nombre.

void f1(void);
int K = 5;

int main(void) {
    int I;
    for (I = 1; I <= 3; I++)
        f1();
    return 0;
}

void f1(void) {
    int K_local = 2;
    K_local += K_local;
    printf("\n\nEl valor de la variable local es: %d", K_local);
    K = K + K_local;
    printf("\nEl valor de la variable global es: %d", K);
}
