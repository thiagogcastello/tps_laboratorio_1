/*
 ============================================================================
 Name        : generica.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "estruc_generica.h"
#include "datos.h"
#define OCUPADO 1
#define LIBRE 0


static int IdIncremental = 0;
static int eGenerica_ObtenerID();
static int eGenerica_ObtenerID()
{
	return IdIncremental++;
}

int eGenerica_Inicializar(eGenerica array[], int tam)
{
	int retorno=-1;
	int i;
	if(array != NULL)
	{
		for(i=0;i<tam;i++)
		{
			array[i].isEmpty=0;
		}
		retorno = 0;
	}
	return retorno;
}

int eGenerica_BuscarEspacioLibre(eGenerica array[], int tam)
{
	int retorno=-1;
	int i;

	if(array != NULL)
	{
		if(tam>=0)
		{
			for(i=0;i<tam;i++)
			{
				if(array[i].isEmpty == 0)
				{
					retorno=i;
					break;
				}
			}
		}
	}
	return retorno;
}

int eGenerica_Alta(eGenerica array[], int tam)
{
	int retorno=-1;
	int indiceLibre;

	if(array != NULL)
	{
		if(tam >= 0)
		{
			indiceLibre = eGenerica_BuscarEspacioLibre(array, tam);
			if(indiceLibre >= 0)
			{
				//Carga de datos no genericos, ej nombre, apellido, etc.


				//Carga de datos Genericos.
				array[indiceLibre].IdGenerica = eGenerica_ObtenerID();
				array[indiceLibre].isEmpty = OCUPADO;
			}
		}

		retorno = 0;
	}
	return retorno;
}

int eGenerica_Modificar(eGenerica array[], int tam, char mje[])
{
	int retorno=-1;
	int indiceaModificar;
	int i;
	int opcion;

	if(array != NULL)
	{
		if(tam >= 0)
		{
			indiceaModificar = get_int(mje);

			for(i=0; i<tam;i++)
			{
				if(indiceaModificar == array[i].IdGenerica)
				{
					//Menu carga de datos no genericos, ej nombre, destino de un vuelo, etc

					opcion = get_int("\nIngrese la opcion que desea modificar: ");
					switch(opcion)
					{
						//cases de los menu de arriba
					}
				}
			}
		}
		retorno = 0;
	}
	return retorno;
}

int eGenerica_Baja(eGenerica array[], int tam, char mje[])
{
	int retorno=-1;
	int indiceBaja;
	int i;

	if(array != NULL)
	{
		if(tam >= 0)
		{
			indiceBaja = get_int(mje);

			for(i=0; i<tam;i++)
			{
				if(indiceBaja == array[i].IdGenerica)
				{
					array[i].isEmpty = LIBRE;
					break;
				}
			}
		}
		retorno = 0;
	}
	return retorno;
}

void eGenerica_MostrarUno(eGenerica array)
{
	printf("%d\n", array.IdGenerica);
	//printeo datos no genericos

}

int eGenerica_MostrarTodos(eGenerica array[], int tam)
{
	int i;
	int retorno=0;
	int contador=0;

	printf("\nListado generica: ");

	if(array != NULL)
	{
		if(tam > 0)
		{
			for(i=0;i<tam;i++)
			{
				if(array[i].isEmpty == 1){
					eGenerica_MostrarUno(array[i]);
					contador++;
				}
			}
		}
	}
	if(contador>0)
	{
		retorno=1;
	}
	return retorno;
}



