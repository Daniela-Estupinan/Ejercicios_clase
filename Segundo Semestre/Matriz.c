/******************************************************************************
Daniela Estupiñan
                         Funciones Matrices
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define tam 50
void inicializarVector(float[][tam]);
void ingresoDatos(int,int);

void main()
{
    float matriz[][tam]={{5.4,3.2},{7.8,2.1},{5.4,1.2}};
    int op=0, num,fil,col;
    while(op != 3)
    {
        printf("1.Inicialización del vector\n2.Ingreso de datos de la matriz\n3.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		
		switch(op)
		{
		    case 1:
		        inicializarVector(matriz);
		        getchar();
		        system("cls");
		    break;
		    case 2:
		        printf("Ingrese el número de filas:");
		        scanf("%d",&fil);
		        printf("Ingrese el número de columnas:");
		        scanf("%d",&col);
		        ingresoDatos(fil,col);
		        getchar();
		        system("cls");
		    break;
		    case 3:
		        exit(0);
		    break;
		    default:
		    printf("Opción Incorrecta");
		    break;
		}  
    }
   
}
void inicializarVector(float arreglo[][tam])
{
    int i=0,j;
    while(i<3)
    {
        j=0;
        while(j<2)
        {
            printf("%.2f\t",arreglo[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void ingresoDatos(int fil,int col)
{
    int i=0,j;
    float arreglo[tam][tam];
    while(i<fil)
    {
        j=0;
        while(j<col)
        {
            printf("Ingrese el elemento:[%d][%d]",i,j);
            scanf("%f",&arreglo[i][j]);
            j++;
        }
    i++;
    }
   i=0;
   printf("Elementos de la matriz\n");
  while(i<fil)
  {
      j=0;
      while(j<col)
      {
          printf("%.1f\t",arreglo[i][j]);
          j++;
      }
  }
   
}
