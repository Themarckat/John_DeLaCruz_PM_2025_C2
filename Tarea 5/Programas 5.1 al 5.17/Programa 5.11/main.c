#include <stdio.h>
#include <stdlib.h>

// Busqueda binaria.

const int MAX = 100;
void Lectura(int[], int);
int Binaria(int[], int, int);

int main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    Lectura(VEC, TAM);

    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Binaria(VEC, TAM, ELE);

    if (RES != -1)
        printf("\nEl elemento se encuentra en la posicion: %d\n", RES + 1);
    else
        printf("\nEl elemento no se encuentra en el arreglo\n");

    return 0;
}

void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Binaria(int A[], int T, int E)
{
    int IZQ = 0, DER = T - 1, CEN;
    while (IZQ <= DER)
    {
        CEN = (IZQ + DER) / 2;
        if (E == A[CEN])
            return CEN;
        else if (E > A[CEN])
            IZQ = CEN + 1;
        else
            DER = CEN - 1;
    }
    return -1;
}
