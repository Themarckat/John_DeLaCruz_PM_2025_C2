#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Alumno
{
    char nombre[50];
    float promedio;
};

void guardarAlumnos(struct Alumno alumnos[], int n)
{
    FILE *f = fopen("alumnos.dat", "wb");
    if (f == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
    fwrite(alumnos, sizeof(struct Alumno), n, f);
    fclose(f);
    printf("Alumnos guardados correctamente.\n");
}

int cargarAlumnos(struct Alumno alumnos[])
{
    FILE *f = fopen("alumnos.dat", "rb");
    if (f == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 0;
    }
    int n = fread(alumnos, sizeof(struct Alumno), MAX, f);
    fclose(f);
    printf("Alumnos cargados correctamente.\n");
    return n;
}

void imprimirAlumnos(struct Alumno alumnos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s - %.2f\n", alumnos[i].nombre, alumnos[i].promedio);
    }
}

void bubbleSortNombre(struct Alumno alumnos[], int n)
{
    struct Alumno temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (strcmp(alumnos[j].nombre, alumnos[j+1].nombre) > 0)
            {
                temp = alumnos[j];
                alumnos[j] = alumnos[j+1];
                alumnos[j+1] = temp;
            }
        }
    }
}

void bubbleSortPromedio(struct Alumno alumnos[], int n)
{
    struct Alumno temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (alumnos[j].promedio > alumnos[j+1].promedio)
            {
                temp = alumnos[j];
                alumnos[j] = alumnos[j+1];
                alumnos[j+1] = temp;
            }
        }
    }
}

int main()
{
    struct Alumno alumnos[MAX];
    int n, opcion;

    printf("Cuantos alumnos quieres ingresar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Nombre del alumno %d: ", i+1);
        scanf("%s", alumnos[i].nombre);
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
    }

    guardarAlumnos(alumnos, n);

    n = cargarAlumnos(alumnos);

    printf("Como quieres ordenar?\n");
    printf("1. Por nombre\n");
    printf("2. Por promedio\n");
    scanf("%d", &opcion);

    if (opcion == 1)
    {
        bubbleSortNombre(alumnos, n);
    }
    else if (opcion == 2)
    {
        bubbleSortPromedio(alumnos, n);
    }
    else
    {
        printf("Opcion no valida.\n");
        return 1;
    }

    printf("\nLista de alumnos:\n");
    imprimirAlumnos(alumnos, n);

    return 0;
}
