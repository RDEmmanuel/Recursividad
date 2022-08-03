#include <stdio.h>

void CuentaRegresiva(int);

int main()
{
	int numero; 
	printf("***EJERCICIO 1 RECURSIVIDAD***\n");
	printf("Cuenta regresiva...\n\n");
	printf("Ingrese un numero entero: ");
	scanf("%d", &numero);
	CuentaRegresiva(numero);
	
	return 0;
}

void CuentaRegresiva(int nro)
{
	if(nro == - 1)
		printf("Tiempo Agotado!\n");
	else
	{
		printf("%d\n", nro);
		CuentaRegresiva(nro - 1);
	}
}











