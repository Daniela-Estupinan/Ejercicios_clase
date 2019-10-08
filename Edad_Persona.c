/******************************************************************************
Realizar un programa que determine si una persona es mayor o menor de edad 

Datos de Entrada:
Entero:edad
Proceso:
Escribir: "Ingrese su edad"
Leer:Edad 
Si (edad>=18)
Escribir:"Mayor de edad"
Sino
Escribir: "Menor de edad"

Salida: Mayor o menor de edad 
*******************************************************************************/
#include <stdio.h>

int main()

{
    int edad;
    char nombre[10];
    printf("Ingrese su nombre:");
    scanf("%s",nombre);
    printf("Ingrese su edad:");
    scanf("%d",&edad);
    if(edad>=18)
        printf("%s es mayor de edad",nombre);
    else
        printf("%s es menor de edad",nombre);
}
