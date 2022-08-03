#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Factorial(int);
int a;

int main()
{
	printf("***EJERCICIO 12 RECURSIVIDAD***\n");
	printf("Calcular el factorial de un Numero entero...\n\n");
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	printf("El resultado es %d", Factorial(a));
	return 0;
}

int Factorial(int a)
{
	if(a == 1)
		return a;
	if(a > 1)
		return a * Factorial(a-1);
	if(a < 0)
		return a * Factorial(-a-1);
}




















