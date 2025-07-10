#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Alumno;

int main() {
    int cantidad, i;
    Alumno *alumnos;

    printf("Cuantos alumnos quieres registrar? ");
    scanf("%d", &cantidad);

    alumnos = (Alumno *)malloc(cantidad * sizeof(Alumno));

    if (alumnos == NULL) {
        printf("No se pudo reservar memoria.\n");
        return 1;
    }

    for (i = 0; i < cantidad; i++) {
        printf("\nAlumno %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
    }

    FILE *archivo = fopen("alumnos.dat", "wb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        free(alumnos);
        return 1;
    }

    fwrite(alumnos, sizeof(Alumno), cantidad, archivo);
    fclose(archivo);
    free(alumnos);

    archivo = fopen("alumnos.dat", "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    Alumno *alumnosLeidos = (Alumno *)malloc(cantidad * sizeof(Alumno));
    if (alumnosLeidos == NULL) {
        printf("No se pudo reservar memoria para leer.\n");
        fclose(archivo);
        return 1;
    }

    fread(alumnosLeidos, sizeof(Alumno), cantidad, archivo);
    fclose(archivo);

    printf("\n--- Datos leidos del archivo ---\n");
    for (i = 0; i < cantidad; i++) {
        printf("\nAlumno %d:\n", i + 1);
        printf("Nombre: %s\n", alumnosLeidos[i].nombre);
        printf("Edad: %d\n", alumnosLeidos[i].edad);
        printf("Promedio: %.2f\n", alumnosLeidos[i].promedio);
    }

    free(alumnosLeidos);

    return 0;
}

