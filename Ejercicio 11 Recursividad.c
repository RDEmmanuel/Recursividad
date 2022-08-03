#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef char tString[30];
tString cadena1;

int i=0;
int longitud=0;

bool Palindromo(tString, int, int);
bool result;

int main()
{
	printf("***EJERCICIO 11 RECURSIVIDAD***\n");
	printf("Determinar si una palabra es Palindromo...\n\n");
	printf("Ingrese una palabra: ");
	gets(cadena1);
	longitud = strlen(cadena1);
	
	result = (Palindromo(cadena1, i, longitud-1));	
	
	if(result == true)
		printf("La palabra ingresada es Palindromo\n");
	else
		printf("La palabra ingresada no es Palindromo\n");
	
	return 0;
}

bool Palindromo(tString cadena1, int inicio, int fin)
{	
	
	if(inicio >= fin)
		return true;
	if(cadena1[inicio] == cadena1[fin])
	{
		Palindromo(cadena1, inicio+1, fin-1);
	}
	else
		return false;
}







