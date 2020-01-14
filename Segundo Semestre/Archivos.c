/*			DANIELA ESTUPIÑAN---PARALELO 1
 Realizar un programa usando funciones que permite generar la serie de n numeros pares y la tabla de multiplicar de cualquier numero*/
     
#include <stdio.h>
#include <locale.h>

void ingresoDatosPares(int);
void ingresoDtsTabla(int,int);
void seriePares(int);
void tablaMultiplicar(int,int);

FILE *archivo; //DECLARACIÓN GLOBAL
void main()
{
	int cantNum,tabla,lim;
	setlocale(LC_ALL,"spanish");
	archivo=fopen("datos.txt","w");
	ingresoDatosPares(cantNum);
	//ingresoDtsTabla(tabla,lim);
}
void ingresoDatosPares(int cantNum)
{
	printf("Ingrese la cantidad de números:");
	fputs("Ingrese la cantidad de números:",archivo);//sirve para escribir strings
	scanf("%d",&cantNum);
	fprintf(archivo,"%d\n",cantNum);//parecido al printf
	seriePares(cantNum);
}
void seriePares(int cantNum)
{
	int cont=1,par=0;
	while(cont<=cantNum)
	{
		par=par+2;
		printf("%d\n",par);
		fprintf(archivo,"%d\n",par);
		cont++;
	}
}
