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
#include "input.h"
#define TAM 2000

int PrintMenu();
int InitPassenger(ePassenger passenger[], int tam);



int main(void) {
	setbuf(stdout, NULL);

	ePassenger passenger[TAM];

	int retornoOpcion;

	InitPassenger(passenger, TAM);

	do
	{
		retornoOpcion = PrintMenu();

		switch(retornoOpcion)
			{
				case 1:
					//addPassenger(list,len,id,name,lastName,price,typePassenger,flycode);
					break;
				case 2:
					printf("\n2.MODIFICAR.");

					break;
				case 3:
					printf("\nIngrese el id a dar de baja:");

					break;
				case 4:
					//MostrarPasajero (passenger, TAM);
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

