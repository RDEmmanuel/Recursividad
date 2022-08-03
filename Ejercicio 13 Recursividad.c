#include <stdio.h>

int Fibonacci(int);
int n;

int main()
{
	printf("EJERCICIO 13 RECURSIVIDAD\n");
	printf("\tFibonacci\n\n");
	printf("Ingrese posicion: ");
	scanf("%d", &n);
	printf("El numero de la serie Fibonacci es %d\n", Fibonacci(n));
	return 0;
}

int Fibonacci(int pos)
{
	if(pos > 1)
	{
		return Fibonacci(pos-1) + Fibonacci(pos-2);
	}
	else
	{
		if(pos == 0)
			return 0;
		if(pos == 1)
			return 1;
	}
}










