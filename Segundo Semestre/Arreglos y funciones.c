#include<stdio.h>
#include<stdlib.h>
#define tam 10
void inicializaArreglo(int[]);
void datosArreglo(int);
void numBuscar(int);
void parImpar(int);
void promedio(int);
int mult(int);
void posNeg(int[]);
int main()
{
	int arreglo[tam]={3,-1,5,9},cantNum,op;
	while(op!=9&&op<=8)
	{
		printf("1.Inicializacion Arreglo\n2.Datos Arreglo\n3.Numero Buscar\n4.Par e Impar\n5.Promedio del estudiante\n6.Multiplos\n7.Positivos y Negativos\n8.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				inicializaArreglo(arreglo);
				getchar();
				system("cls");
			break;                         
			case 2:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				datosArreglo(cantNum);
				system("cls");
			break;
			case 3:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				numBuscar(cantNum);
				getchar();
				system("cls");
			break;
			case 4:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				numBuscar(cantNum);
				getchar();
				system("cls");
			break;
			case 5:
			    printf("Ingrese la cantidad de notas:");
			    scanf("%d",&cantNum);
			    promedio(cantNum);
			    getchar();
			    system("cls");
			break;
			case 6:
			    printf("Ingrese la cantidad de numeros:");
			    scanf("%d",&cantNum);
			   printf("La suma es %d\n",mult(cantNum));
			    getchar();
			    system("cls");
			break;
			case 7:
			    posNeg(arreglo);
			    getchar();
			    system("cls");
			break;
			case 8:
			    exit(0);
			break;
			default:
				printf("Opcion Invalida\n");
			break;
						
		}
	}
		
}
void inicializaArreglo(int arreg[tam])
{
	int cont=0;
	while(cont<4)
	{
		printf("Elemento[%d]=%d\n",cont,arreg[cont]);
		cont++;
	}
}

void datosArreglo(int cant)
{
	int cont=0,arreglo[tam];
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Elementos del vector\n");
	cont=0;
	while(cont<cant)
	{
		printf("Elemento[%d]=%d\n",cont,arreglo[cont]);
		cont++;
	}
}

void numBuscar(int cant)
{
	int cont=0,arreglo[tam],buscar,cuenta=0;
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Ingrese el elemento a buscar\n");
	scanf("%d",&buscar);
	cont=0;
	while(cont<cant)
	{
		if(buscar==arreglo[cont])
			cuenta++;
		cont++;
	}
	printf("El numero %d se repite %d",buscar,cont);
}
void parImpar(int cant)
{
	int cont=0,arreglo[tam],buscar,contImp=0,contP=0;
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:\n",cont);
		scanf("%d",&arreglo[cont]);
		if(arreglo[cont]%2==0)
			contP++;
		else
			contImp++;
	cont++;
		}
		printf("Pares:%d\n",contP);
		printf("Impares:%d\n",contImp);	
}
void promedio(int cant)
{
    int cont=0;
    float notas[tam],suma=0,prom=0,mayor=0,menor=9999;
    while(cont<cant)
    {
        printf("Ingrese la calificación %d:\n",cont+1);
        scanf("%f",&notas[cont]);
        suma=suma+notas[cont];
        if(notas[cont]>mayor)
            mayor=notas[cont];
        if(notas[cont]<menor)
            menor=notas[cont];
    cont++;    
    }
    prom=suma/cant;
    printf("El promedio es:%.2f\n",prom);
    printf("La mayor calificación es:%.2f\n",mayor);
    printf("La menor calificación es:%.2f\n",menor);
}
int mult(int cant)
{
    int cont=0,arreglo[tam],suma=0,mult=0;
    while(cont<cant)
    {
        mult=mult+3;
        arreglo[cont]=mult;
        printf("%d\n",arreglo[cont]);
        suma=suma+arreglo[cont];
    cont++;
    }
    return suma;
}
void posNeg(int arreglo[tam])
{
    int cont=0,contPos=0,contNeg=0;
    while(arreglo[cont]!=0)
    {
        cont++;
        printf("Ingrese el número:");
        scanf("%d",&arreglo[cont]);
        if(arreglo[cont]>0)
            contPos++;
        if(arreglo[cont]<0)
            contNeg++;
    }
    printf("La cantidad de numeros positivos son: %d\n",contPos);
    printf("La cantida de numeros negativos son: %d\n",contNeg);
}

