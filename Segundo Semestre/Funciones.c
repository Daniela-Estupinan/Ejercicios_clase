/******************************************************************************
 funciones 

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float areaCirculo (float radio);
int factorial (int);
int tablaM (int,int);
void parImpar(int);
void main ()
{
  float radio;
  int num, tabla, lim;
  printf ("Area del Circulo\n");
  printf ("Ingrese el radio:\n");
  scanf ("%f", &radio);
  printf ("El area del circulo es:\n%.2f", areaCirculo (radio));
  printf ("\nFactorial de un numero\n");
  printf ("Ingrese un numero:\n");
  scanf ("%d", &num);
  printf ("El factorial del numero es:%d\n", factorial (num));
  printf ("\nTabla de multiplicar\n");
  printf ("Ingrese la tabla de multiplicar:\n");
  scanf ("%d", &tabla);
  printf ("Ingrese el limite:\n");
  scanf ("%d", &lim);
  tablaM (tabla,lim);
  parImpar(num);
}

float areaCirculo (float radio)
{
  float area = 0, pi = 3.1416;
  area = pi * pow (radio, 2);
  return area;
}

int factorial (int num)
{
  int fact = 1, cont = 1;
  while (cont <= num)
    {
      fact = fact * cont;
      cont++;
    }
  return fact;
}

int tablaM (int tabla, int lim)
{
  int mult = 1, cont = 1;
  while (cont <= lim)
    {
        mult=tabla*cont;
        printf("%dX%d=%d\n",tabla,cont,mult);
        cont++;
    }
    return mult;
}
void parImpar(int num)
{
    if(num%2==0)
        printf("El numero ingresado es par\n");
    else
        printf("El numero ingresado es impar");
}
