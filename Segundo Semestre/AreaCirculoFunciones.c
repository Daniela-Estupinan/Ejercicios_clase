/******************************************************************************

Area del circulo con funciones 

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float areaCirculo (float radio);
void main ()
{
  float radio;
  printf ("Ingrese el radio:\n");
  scanf ("%f", &radio);
  printf ("El area del circulo es:\t%.2f", areaCirculo (radio));
}

float areaCirculo (float radio)
{
  float area = 0, pi = 3.1416;
  area = pi * pow (radio, 2);
  return area;
}
