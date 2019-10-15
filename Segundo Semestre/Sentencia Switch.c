/******************************************************************************

Realizar un programa que contenga un menu con las siguientes opciones:
1.-Ecuacion Cuadratica
2.-Area del triangulo

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
   int opcion,yearActual,mesActual,diaActual,yearNacimiento,mesNacimiento,diaNacimiento,edadYear,edadMeses,edadDia;
   float a,b,c,x1=0,x2=0,base,alt,area=0;
   printf("Menu principal\n1.Ecuación Cuadratica\n2.Área del Triangulo\n");
   printf("Escoja la opción:");
   scanf("%d",&opcion);
   switch(opcion)
   {
       case 1: 
       printf("Ingrese el coeficiente a:");
       scanf("%f",&a);
       printf("Ingrese el coeficiente b:");
       scanf("%f",&b);
       printf("Ingrese el coeficiente c:");
       scanf("%f",&c);
       x1=(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a);
       x2=(-b-(sqrt(pow(b,2)-4*a*c)))/(2*a);
       printf("x1=%.2f",x1);
       printf("\t\tx2=%.2f",x2);
      break;
      case 2:
        printf("Ingrese la base:");
        scanf("%f",&base);
        printf("Ingrese la altura:");
        scanf("%f",&alt);
        area=(base*alt)/2;
        printf("El area del triangulo es:%.2f",area);
      break;
      case 3:
      printf("Ingrese el dia de nacimiento:");
      scanf("%d",&diaNacimiento);
      printf("Ingrese el mes de nacimiento:\n");
      scanf("%d",&mesNacimiento);
      printf("Ingrese el año de nacimiento:\n");
      scanf("%d",&yearNacimiento);
      printf("Ingrese dia actual:");
      scanf("%d",&diaActual);
      printf("Ingrese mes actual:");
      scanf("%d",&mesActual);
      printf("Ingrese año actual:");
      scanf("%d",&yearActual);
      if(diaActual<diaNacimiento)
      {
        diaActual+=30;
        mesActual-=1;
      }
      else if (mesActual<mesNacimiento)
      {
          mesActual+=12;
          yearActual-=1;
      }
      edadYear=yearActual-yearNacimiento;
      edadMeses=mesActual-mesNacimiento;
      edadDia=diaActual-diaNacimiento;
      printf("Su edad en años es:%d\n",edadYear);
      printf("Su edad en meses es:%d\n",edadMeses);
      printf("Su edad en dias es:%d\n",edadDia);
     default:
        printf("Opcion invalida");
      break;
       
   }
}
