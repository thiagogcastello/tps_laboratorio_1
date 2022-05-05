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
int VerificarPositivoNegativo (int numero);
int VerificarParidad (int numero);
int VerificarMaximoMinimo (int maximo,int minimo, int numero);



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

	if(numero > maximo || numero < minimo)
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


