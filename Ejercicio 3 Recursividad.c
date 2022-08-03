#include <stdio.h>
#include <math.h>

void Invertir(int);
 
int main()
{	
	int numero;
	printf("***EJERCICIO 3 RECURSIVIDAD***\n");
	printf("Numero invertido...\n\n");
	printf("Ingrese un numero positivo: ");
	scanf("%d", &numero);
	printf("El numero invertido es: ");
	Invertir(numero);
	
	return 0;
}

void Invertir(int nro)
{
	int result=0;
	int aux=0;
	if(nro > 0)
	{
		result = nro%10;
		aux = result;
		printf("%d", aux);
		Invertir(nro/10);
	}
}











