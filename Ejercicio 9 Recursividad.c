#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Potencia(int, int);
int a, b, result; 

int main()
{
	printf("***EJERCICIO 9 RECURSIVIDAD***\n");
	printf("Potencia de un numero entero... \n\n");
	printf("Ingrese un numero: ");
	scanf("%d", &a);
	printf("Ingrese el exponente: ");
	scanf("%d", &b);
	result = Potencia(a,b);
	printf("Resultado: %d", result);
	return 0;
}

int Potencia(int a, int b)
{
	if(b == 0)
		return 0;
	if(b == 1)
		return a;
	if(b > 1)
	{
		a = a * Potencia(a, b-1);
		return a;
		/*return a * Potencia(a, b-1);	*/	
	}	
}







