#include <stdio.h>
#include <math.h>

int MCD(int, int);
int a, b;

int main()
{	
	a=0;
	b=0;
	printf("***EJERCICIO 7 RECURSIVIDAD***\n");
	printf("Maximo comun divisor...\n\n");
	printf("Ingrese primer valor: ");
	scanf("%d", &a);
	printf("Ingrese segundo valor: ");
	scanf("%d", &b);
	printf("\nEl maximo comun divisor entre %d y %d es %d", a, b , MCD(a,b));
	return 0;
}

int MCD(int a, int b)
{	
	if(b == 0)
	{
		return a;
	}
	return MCD(b , (a%b));
}









