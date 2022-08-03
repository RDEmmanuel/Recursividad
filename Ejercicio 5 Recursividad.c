#include <stdio.h>

void CuentaRegresiva(int);

int main()
{
	int numero;
	printf("***EJERCICIO 5 RECURSIVIDAD***\n");
	printf("Cuenta regresiva...\n\n"); 
	printf("Ingrese un numero entero: ");
	scanf("%d", &numero);printf("\n");
	CuentaRegresiva(numero);
	
	return 0;
}

void CuentaRegresiva(int nro)
{
	if(nro == - 1)
	{
		sleep(1);
		printf("Tiempo Agotado!\n");
	}
	else
	{
		sleep(1);
		printf("%d\n", nro);
		CuentaRegresiva(nro - 1);
	}
}











