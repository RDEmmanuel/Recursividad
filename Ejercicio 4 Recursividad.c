#include <stdio.h>

int Division(int,int);
int valor1, valor2;

int main()
{
	printf("***EJERCICIO 4 RECURSIVIDAD***\n");
	printf("Division entera...\n\n");
	printf("Ingrese los valores a dividir \n");
	printf("Ingrese el dividendo: ");
	scanf("%d", &valor1);
	printf("Ingrese el divisor: ");
	scanf("%d", &valor2);
	
	printf("El Resultado de %d / %d = %d", valor1, valor2, Division(valor1, valor2));	
	return 0;
}

int Division(int valor1, int valor2)
{		
	if(valor1 == valor2)
		return 1;
		
	if(valor1 < valor2)
		return 0;
	
	if(valor1 > valor2)
		return (Division(valor1 - valor2, valor2) + 1); 
}




















