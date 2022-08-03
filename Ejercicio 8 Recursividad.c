#include <stdio.h>
#define max 5

typedef int tVector[max];
tVector vector;

void CargarVector(tVector);
void Visualizar();
int SumaVec(tVector, int);

int main()
{	
	int result;
	printf("***EJERCICIO 8 RECURSIVIDAD***\n");
	printf("Suma de los elementos de un vector...\n\n");	
	CargarVector(vector);
	system("pause");system("cls");
	Visualizar();
	result = SumaVec(vector, max);
	printf("\n\nEl resultado de la suma de los valores del vector es: %d", result);
	printf("\n");
		
	return 0;
}

int SumaVec(tVector pVector, int i)
{
	if(i == 0)
		return 0;
	else
		/*return pVector[i-1] + SumaVec(pVector, i-1);*/
		return SumaVec(pVector, i-1) + pVector[i-1];
}

void CargarVector(tVector vector)
{
	int i;
	printf("Cargar Vector \n");
	for(i=0; i<max; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &vector[i]);
	}
	printf("Vector Cargado!\n\n");
}

void Visualizar()
{
	int i;
	printf("Contenido del vector: \n\n");
	for(i=0; i<max; i++)
	{
		printf("%d\t", vector[i]);
	}
}






