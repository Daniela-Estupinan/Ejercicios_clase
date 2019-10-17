/******************************************************************************

Realizar un proyecto que permita generar n numeros enteros

*******************************************************************************/
#include <stdio.h>

void main()
{
  int cont=1,nnum;
  printf("Cuantos numeros va a ingresar:");
  scanf("%d",&nnum);
  
  while(cont<=nnum)
  {
      printf("%d\n",cont);
      cont++;
  }
}
