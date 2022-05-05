#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "imput.h"

int InitPassenger(ePassenger passenger[], int tam)
{
	int i;
	for(i=0; i<tam; i++)
	{
		passenger[i].isEmpty=0;
	}

	return 0;
}

int addPassenger(ePassenger list, int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[])
{

	return -1;
}



void cargarPasajero(ePassenger array[], int tamanho)
{
	int i;

	for (i=0; i < tamanho; i++)
	{
		PedirArraydeChar(array[i].name, "Ingrese el nombre del pasajero: ");
		PedirArraydeChar(array[i].lastName, "\nIngrese el apellido del pasajero:");
		array[i].price = PedirIntMayorCero("\nIngrese el precio del vuelo: ");
		PedirArraydeChar(array[i].flycode, "\nIngrese el codigo de vuelo (codigo de 10 caracteres): ");
		array[i].isEmpty = 1;
	}

}
