/*
 ============================================================================
 Name        : Biblioteca para pedir array de todo tipo.
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "verificaciones.h"


void PedirArrayEnterosSinValidas(int array[],int size,char mje[])
{
	int i;

	for(i=0; i<size; i++)
	{
		printf("%s", mje);
		scanf("%d", &array[i]);
	}
}

float PedirIntMayorCero(char mje[])
{
	float retorno;

	printf(mje);
	scanf("%f", &retorno);

	while(retorno < 1)
	{
		printf("\nError... Ingrese un valor mayor a 0: ");
		scanf("%f", &retorno);
	}

	return retorno;
}


void PedirArrayMaximoMinimo(int vector[], int size, int maximo, int minimo, char mje[])
{
	int i;
	for(i=0; i< size; i++)
	{
		printf("%s", mje);
		scanf("%d", &vector[i]);
		vector[i] = VerificarMaximoMinimo(maximo, minimo, vector [i]);
	}
}

void CargarArrayAleatorio(int array[],int size, char mje[])
{
	int posicion;
	char respuesta='s';
	int i;

	for(i=0; i<size; i++)
	{
		array[i]=0;
	}

	while(respuesta == 's')
	{
		printf("Ingrese la posicion a cargar: ");
		scanf("%d", &posicion);
		printf(mje);
		scanf("%d", &array[posicion]);
		printf("Desea ingresar otro dato? S/N");
		fflush(stdin);
		scanf("%c", &respuesta);
	}
}

void CargarArrayAleatorioDifCero(int array[],int size, char mje[])
{
	int posicion;
	char respuesta='s';
	int i;

	for(i=0; i<size; i++)
	{
		array[i]=0;
	}

	while(respuesta == 's')
	{
		printf("Ingrese la posicion a cargar: ");
		scanf("%d", &posicion);
		printf(mje);
		scanf("%d", &array[posicion]);
		VerificarDistintoCero(array, posicion);
		printf("Desea ingresar otro dato? S/N");
		fflush(stdin);
		scanf("%c", &respuesta);
	}
}

void PrintearUnArrayInt(int array[], int size, char mje[])
{
	int i;
	printf(mje);
	for(i=0; i<size; i++)
	{
		printf("%d\t", array[i]);
	}
}

void PrinteoDeUnArrayIntEspecifico(int array[],int size)
{
	int posicion;

	printf("Ingrese la posicion que desea mostrar:");
	scanf("%d", &posicion);
	while(posicion>size)
	{
		printf("Error. La posicion que ha seleccionado no existe. Ingrese la posicion nuevamente:");
		scanf("%d", &posicion);
	}
	printf("Indice: %d -- %d\n",posicion, array[posicion-1]);
}


void PedirArraydeChar(char array[],char mje[])
{
	printf(mje);
	fflush(stdin);
	gets(array);
}
