#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y=20,r,R[100],RC[100],i,j,c=1,n;
	printf("<---------------------------------------------->\n");
	printf("Programa que convierte de base 10 a base 20\n");
	printf("Recuerda usar numeros mas grande que 20\nde lo contrario el resultado es el mismo numero\n");
	printf("Introduce el numero que deseas convertir\nN=");
	scanf("%d",&x);
	n=x;
	printf("%d",x2);
	if(x<y)//Si el n�mero es menor a 20 me va a imprimir el mismo n�mero
	{      //Ya que no es divisible y el residuo seria el mismo n�mero
		printf("El resultado es %d",x);
	}
	else
	{
		do
		{
			n=n/10; //como no se cuantas veces va a hacer las operaciones
			c++;	//determino los d�gitos que contiene el n�mero para realizar las operaciones
		}while(n/10>0);
		printf("Los digitos son %d\n",c);
		printf("El resultado de la conversion es: ");
		for(i=1;i<c;i++)
		{
			r=x%y;//el modulo indispensable para el cambio de bases
			x=x/y;//como como el resultado se tiene
			R[i]=r;
		}
		for(i=1;i<c;i++)
		{
			RC[i]=R[c-i];
			//La conversión de un número son sus modulos entonces
			//asigno los valores del últino al primero a distintos valores de i
			printf("%d",RC[i]);
		}

	}

	return 0;
}//Fin
//Cortes Cirett David
