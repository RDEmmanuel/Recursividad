#include <stdio.h>

int Suma(int);
void Mostrar();
int n, i;

int main()
{	
	printf("***EJERCICIO 10 RECURSIVIDAD***\n");
	printf("Suma desde 1 hasta N\n\n");
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	Mostrar();
	printf("\nEl resultado de la suma desde 1 hasta N es = %d\n", Suma(n));
	return 0;
}

int Suma(int n)
{	
	if(n == 0)
		return 0;
	if(n > 1)
		return n + Suma(n-1);	
}

void Mostrar()
{	
	printf("\n");
	for(i=1; i<=n; i++)
	{
		printf("%d\n", i);	
	}
}










