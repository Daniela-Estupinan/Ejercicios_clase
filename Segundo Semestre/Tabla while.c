/******************************************************************************

Realizar un proyecto que imprima la tabla de multiplicar de cualquier numero

*******************************************************************************/
#include <stdio.h>

void main()
{
  int cont=0,producto=0,tabla,limite;
  printf("Ingrese el numero de la tabla que desea generar:\n");
  scanf("%d",&tabla);
  printf("Ingrese el limite de la tabla:\n");
  scanf("%d",&limite);
  
  while(cont<=limite)
  {
      producto=tabla*cont;
      printf("%d x %d=%d\n",tabla,cont,producto);
      cont++;
  }

}
