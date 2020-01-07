/******************************************************************************
Daniela Estupiñan------Ingreso de Datos
*******************************************************************************/
#include <stdio.h>
void ingresoDatos(char[],int ,float, char *,int *,float *);
void main()
{
    char frase[10],*f;
    int num,*n;
    float numero,*n1;
    printf("Ingrese una frase:");
    gets(frase);
    printf("Ingrese un numero entero:");
    scanf("%d",&num);
    printf("Ingrese un numero flotante:");
    scanf("%f",&numero);
    ingresoDatos(frase,num,numero,f,n,n1);
}

void ingresoDatos(char frase[],int num ,float numero, char *f ,int *n,float *n1)
{
    f=frase;
    n=&num;
    n1=&numero;
    printf("Frase:%s\n",f);
    printf("Numero entero:%d\n",*n);
    printf("Numero flotante:%.2f\n",*n1);
}
