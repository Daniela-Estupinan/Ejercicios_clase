/******************************************************************************
Daniela Estupiñan Paralelo 1 -- ARREGLOS
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define tam 10
void inicializaArreglo (int[]);
void datosVector (int);
void ();
void main()
{
    int op,cantNum,cant,arreglo[tam]={2,4,5,-1};
    do
    {
        printf("\t\t\tMENÚ\n");
        printf("Seleccione una opcion:\n1.Inicialización de Arreglos\n2.Impresión de n números\n3.\n4.Salir\n");
        scanf("%d",&op);
        switch (op)
        {
            case 1:
            {
               inicializaArreglo(arreglo);
               getchar();getchar();
               system("clear");
            }
            break;
            case 2:
            {
                printf("Ingrese la cantidad de elementos del Vector:\n");
                scanf("%d",&cantNum);
                datosVector(cantNum);
                getchar();getchar();
               system("clear");
            }
            break;
            case 3:
            {
               printf("");
               getchar();getchar();
               system("clear");  
            }
            break;
            case 4:
            {
                exit (0);
            }
            break;
            default: 
            {
                printf("OPCIÓN INCORRECTA");
            }
            break;
        }
    }while(op<=3);

}
void inicializaArreglo(int arreg[tam])
{
    int cont=0;
    while(cont<4)
    {
        printf("Arreglo[%d]=%d\n",cont,arreg[cont]);
        cont++;
    }
}
void datosVector(int cant)
{
    int cont=0,arreglo[tam];
    while(cont<cant)
    {
        printf("Ingrese el elemento[%d]:",cont);
        scanf("%d",&arreglo[cont]);
        cont++;
    }
    printf("Elementos del Vector\n");
    cont=0;
    while(cont<cant)
    {
          printf("Elementos del arreglo %d es %d\n",cont,arreglo[cont]);
          cont++;
    }
}
void 
