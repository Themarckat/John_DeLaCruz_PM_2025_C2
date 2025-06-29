#include <stdio.h>
#include <stdlib.h>

//  Declaración de cadenas de caracteres y asignación de valores.

int main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts(cad0);
    cad0 = "Brasil";
    puts(cad0);

    char cad1_buffer[100];
    char *cad1 = cad1_buffer;

    gets(cad1);
    gets(cad1);

    cad1 = "";

    char cad2[20] = "México";
    puts(cad2);
    gets(cad2);
    puts(cad2);

    return 0;
}
