#include <stdio.h>
#include <math.h>

void Binario(int);

int main()
{
	int numero;
	printf("***EJERCICIO 2 RECURSIVIDAD***\n");
	printf("Numero Binario...\n\n");
	printf("Ingrese un numero entero: ");
	scanf("%d", &numero);
	printf("El numero en binario es: ");
	Binario(numero);
	
	return 0;
}
 
void Binario(int nro)
{
	int result=0;
	int aux=0;
	if(nro > 0)
	{
		result=nro%2;
		aux=result + aux;		
		Binario(nro/2);
		printf("%d", aux);
	}
}









