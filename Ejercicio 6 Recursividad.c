#include <stdio.h>
#include <math.h>

int Multiplicar(int, int);
int a, b;

int main()
{	
	printf("***EJERCICIO 6 RECURSIVIDAD***\n");
	printf("Producto de dos numeros enteros positivos...\n\n");	
	printf("Ingrese primer valor: ");
	scanf("%d", &a);
	printf("Ingrese segundo valor: ");
	scanf("%d", &b);
	printf("El resultado de %d * %d = %d", a, b, Multiplicar(a,b));
	return 0;
}

int Multiplicar(int a, int b)
{		
	if(b == 1)
		return a;	
	if(b > 0)
		return a + Multiplicar(a,b-1);
	else 
		return - a + Multiplicar(a,b + 1);
	return 0;
}

























