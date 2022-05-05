/*
 ============================================================================
 Name        : Tp_[N2].c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "imput.h"
#define TAM 2000

int PrintMenu();
int InitPassenger(ePassenger passenger[], int tam);



int main(void) {
	setbuf(stdout, NULL);

	ePassenger passenger[2000];

	int retornoOpcion;

	InitPassenger(passenger, TAM);

void cargarPasajero(ePassenger array[], int tamanho)
{
	int i;
	char respuesta;

		for (i=0; i < tamanho; i++)
		{

				PedirArraydeChar(array[i].name, "Ingrese el nombre del pasajero: ");
				PedirArraydeChar(array[i].lastName, "\nIngrese el apellido del pasajero:");
				array[i].price = PedirIntMayorCero("\nIngrese el precio del vuelo: ");
				PedirArraydeChar(array[i].flycode, "\nIngrese el codigo de vuelo (codigo de 10 caracteres): ");
				array[i].isEmpty = 1;

				printf("Desea cargar otro pasajero? s/n");
				fflush(stdin);
				scanf("%c", &respuesta);
				if(respuesta == 'n')
				{
					break;
				}
			}
}

void MostrarPasajero (ePassenger array[], int tamanho)
{
	int i;
	for(i=0;i<tamanho; i++)
	{
		if(array[i].isEmpty == 1)
		{
			printf("Pasajero %d:\n", i+1);
			printf("\tNombre/s: %s", array[i].name);
			printf("\n\tApellido/s: %s", array[i].lastName);
			printf("\n\tFlycode: %s", array[i].flycode);
			printf("\n\tEl precio del vuelo es : $%.2f\n\n", array[i].price);
		}
	}
}


	do
	{
		retornoOpcion = PrintMenu();

		switch(retornoOpcion)
			{
				case 1:
					cargarPasajero(passenger, TAM);
					break;
				case 2:
					printf("\n2.MODIFICAR.");
					break;
				case 3:
					printf("\n3.BAJA.");
					break;
				case 4:
					MostrarPasajero (passenger, TAM);
					break;
				case 5:
					printf("\n5.SALIR.");
					break;
				default:
					printf("\nOpcion no valida. Reingrese una opcion.");
					break;

			}
	}while(retornoOpcion != 6);


	return 0;
}

int PrintMenu()
{
	int retorno;
	printf("\n1.ALTAS.");
	printf("\n2.MODIFICAR.");
	printf("\n3.BAJA.");
	printf("\n4.INFORMAR.");
	printf("\n5.SALIR.");
	printf("\nIngrese una opcion:");
	scanf("%d", &retorno);

	return retorno;
}

