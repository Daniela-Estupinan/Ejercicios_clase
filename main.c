/******************************************************************************
Realizar un programa en C que determine el area del cìrculo

*******************************************************************************/
#include <stdio.h>
#define pi 3.1416

void main()
{
    float radio,area=0;
    printf ("Ingrese el radio:");
    scanf ("%f",&radio);
    area=pi*radio*radio;
    printf("El area es %f",area);
}