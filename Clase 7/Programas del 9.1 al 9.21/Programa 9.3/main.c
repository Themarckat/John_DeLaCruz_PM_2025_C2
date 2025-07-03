#include <stdio.h>
#include <stdlib.h>

//  Archivos y cadenas de caracteres.

int main(void)
{
    char cad[50];
    int res;
    FILE *ar;

    if ((ar = fopen("arc.txt", "w")) != NULL)
    {
        printf("\n�Desea ingresar una cadena de caracteres? S�-1 No-0:");
        scanf("%d", &res);
        while (res)
        {
            fflush(stdin);
            printf("Ingrese la cadena: ");
            fgets(cad, sizeof(cad), stdin);
            fputs(cad, ar);
            printf("\n�Desea ingresar otra cadena de caracteres? S�-1 No-0:");
            scanf("%d", &res);
            if (res)
                fputs("\n", ar);
        }
        fclose(ar);
    }
    else
        printf("No se puede abrir el archivo");

    return 0;
}
