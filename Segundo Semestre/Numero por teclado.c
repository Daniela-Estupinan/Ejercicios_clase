/******************************************************************************

Realizar un proyecto que permita la sumatoria de los numeros ingresados por teclado

*******************************************************************************/
#include <stdio.h>

void main()
{
  int cont=1,nnum,suma=0,nnumeros;
  printf("Cuantos numeros va a ingresar:");
  scanf("%d",&nnum);
  
  while(cont<=nnum)
  {
      printf("Ingrese un numero:\n");
      scanf("%d",&nnumeros);
      suma=suma+nnumeros;
      cont++;
  }
  printf("La suma de %d numeros es %d\n",nnum,suma);
}

