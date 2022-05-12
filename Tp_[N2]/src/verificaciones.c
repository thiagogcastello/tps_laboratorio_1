/*
 ============================================================================
 Name        : Verificacion de datos
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "verificaciones.h"
int VerificarPositivoNegativo (int numero)
{
	int retorno;

	if(numero > 0)
	{
		retorno = 1;
	}else{
		retorno = 0;
	}
	return retorno;
}


int VerificarParidad (int numero)
{
	float retorno;

	if(numero %2 == 0)
	{
		retorno = 1;
	}else{
		retorno =0;
	}

	return retorno;
}

int VerificarMaximoMinimo (int maximo,int minimo, int numero)
{

	while(numero > maximo || numero < minimo)
	{
		printf("Error. Ingrese un numero entre %d y %d:", maximo, minimo);
		scanf("%d", &numero);
	}
	return numero;
}

void VerificarDistintoCero (int array[], int posicion)
{
	while(array[posicion]==0)
	{
		printf("Error. Ingrese un valor distinto a cero");
		scanf("%d", &array[posicion]);
	}
}

int validar_cadena(char array[])
{
	int rtn=0;
	int longitud = strlen(array);

	if(longitud > 0)
	{
		for(int i=0;i<strlen(array);i++)
		{
			if(isspace(array[i]) != 0)
			{

			}else{
				if(isalpha(array[i]) == 0)
				{
					rtn=1;
				}
			}
		}
	}else
	{
		rtn = 1;
	}
	if(rtn == 1)
		printf("\nError. Se ha ingresado un caracter no valido.");

	return rtn;
}

