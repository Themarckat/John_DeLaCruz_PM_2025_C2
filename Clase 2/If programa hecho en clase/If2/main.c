#include <stdio.h>
#include <stdlib.h>

//escribir un programa que determine el rango de edad //de una persona
// 1- de 0 años (anios) 1 año - recien nacido // 2- de 1 a 12 niño
// 2- de 1 a 12 niño
// 3- de 12 años a 17 es adolencente
// 4- de 18 a 38 es adulto
// 5- de 39 a 75 adulto mayor
// 6- de 76 a 86 es envejeciente
// 7- mayor de 86 es anciano

int main()
{
int edad = 0;

printf("\ningrese su edad: ");
scanf("%i", &edad);
if (edad >= 0 && edad < 130)
{
    if(edad <= 1)
    {
        printf("Usted es un recien nacido");
    }
    else if (edad >= 1 && edad <= 12)
    {
        printf("\nEs un niño");
    }
    else if (edad >= 13 && edad <= 17)
    {
        printf("\nUsted es un adolecente");
    }
    else if (edad >= 18 && edad <= 38)
    {
        printf("\nUsted es un adulto");
    }
    else if (edad >= 39 && edad <= 75)
    {
        printf("\nUsted es un adulto mayor");
    }
    else if (edad >= 76 && edad <= 86)
    {
        printf("\nUsted es un anciano");
    }
    else if (edad >= 87)
    {
        printf("\nNecesito su rutina para la salud");
    }
    else if (edad >= 120)
    {
        printf("\nLa vida no es tan larga");
    }
}
}
