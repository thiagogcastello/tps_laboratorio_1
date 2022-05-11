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
#include "validaciones.h"

void get_charArray(char array[],char mje[]);
char get_char(char mje[]);
int get_int(char mje[]);
void PedirArrayEnterosSinValidarInt(int array[],int size,char mje[]);
void PedirArrayMaximoMinimo(int vector[], int size, int maximo, int minimo, char mje[]);
void CargarArrayAleatorio(int array[],int size, char mje[]);
void CargarArrayAleatorioDifCero(int array[],int size, char mje[]);
void PrintearUnArrayInt(int array[], int size, char mje[]);


//GET CHAR
void get_charArray(char array[],char mje[])
{
	printf(mje);
	fflush(stdin);
	gets(array);
}
char get_char(char mje[])
{
	char retorno;

	printf(mje);
	fflush(stdin);
	scanf("%c", &retorno);

	return retorno;
}

//GET INT
int get_intPositivo(char mje[])
{
	int retorno;

	printf(mje);
	scanf("%d", &retorno);
	while(retorno < 1)
	{
		printf("Error... Ingrese un valor mayor a cero");
		scanf("%d", &retorno);
	}

	return retorno;
}
int get_int(char mje[])
{
	int retorno;

	printf(mje);
	scanf("%d", &retorno);

	return retorno;
}
void PedirArrayMaximoMinimo(int vector[], int size, int maximo, int minimo, char mje[])
{
	int i;
	for(i=0; i< size; i++)
	{
		vector[i]=get_int(mje);
		vector[i] = VerificarMaximoMinimo(maximo, minimo, vector [i]);
	}
}
void PedirArrayEnterosSinValidarInt(int array[],int size,char mje[])
{
	int i;

	for(i=0; i<size; i++)
	{
		array[i] = get_int(mje);
	}
}
int get_anio(char mje[])
{
	int retorno;

	retorno = get_int(mje);

	retorno = VerificarMaximoMinimo (2022,0,retorno);

	return retorno;
}

int get_mes(char mje[])
{
	int retorno=0;

	retorno = get_int(mje);

	retorno = VerificarMaximoMinimo (12,1,retorno);

	return retorno;
}

int get_dia(char mje[])
{
	int retorno=0;

	retorno = get_int(mje);

	retorno = VerificarMaximoMinimo (31,1,retorno);

	return retorno;
}

//GET FLOAT
float get_float(char mje[])
{
	float retorno;

	printf(mje);
	scanf("%f", &retorno);

	return retorno;
}
void PedirArrayMaximoMinimoFloat(float vector[], int size, float maximo, float minimo, char mje[])
{
	int i;
	for(i=0; i< size; i++)
	{
		vector[i] = get_float(mje);
		vector[i] = VerificarMaximoMinimo(maximo, minimo, vector [i]);
	}
}

//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------

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
		posicion=get_int("\nIngrese la posicion a cargar: ");
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
//-------------------------------------------------------------//-------------------------------------------------------------
//-------------------------------------------------------------
//-------------------------------------------------------------

//Ordenamientos
void OrdenamientoBurbujaMenorMayor(int vec[], int size)
{
	int aux;

	for(int i=0; i<size; i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(vec[i]>vec[j])
			{
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}
		}
	}
}


void OrdenamientoBurbujaMayorMenor(int vec[], int size)
{
	int aux;

	for(int i=0; i<size; i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(vec[i]<vec[j])
			{
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}
		}
	}
}






