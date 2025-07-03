#include <stdio.h>
#include <stdlib.h>

// Suma reales

void sumypro(FILE *);

int main(void)
{
    FILE *ap;
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap);
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo");
    return 0;
}

void sumypro(FILE *ap1)
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;

    while (!feof(ap1))
    {
        if (fgets(cad, 30, ap1) == NULL)
            break;
        r = atof(cad);
        if (r)
        {
            i++;
            sum += r;
        }
    }
    printf("\nSuma: %.2f", sum);
    if (i)
        printf("\nPromedio: %.2f", sum / i);
}
