#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int CLA;
    float SU1, SU2, SU3, SU4, SU5, Su6, ing, pro;
    printf("Ingrese la clave del empleado y los 6 sueldos: \n");
    scanf("%d %f %f %f %f %f %f", &CLA, &SU1, &SU2, &SU3, &SU4, &SU5, &Su6);
    pro = ing / 6;
    printf("\n %d %5.2f %5.2f", CLA, ing, pro);
}
