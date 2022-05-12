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
#define LEN 2000

static int IdIncremental = 0;
static int eAlbum_ObtenerID();
static int eAlbum_ObtenerID()
{
	return IdIncremental++;
}

int PrintMenu();
int InitPassenger(ePassenger passenger[], int tam);
int addPassenger(ePassenger list[], int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[]);


int main(void) {
	setbuf(stdout, NULL);

	ePassenger passenger[LEN];

	eTypePassenger tipoPasajero[4]={{1,"Turista"},
									{2,"Premium Economica"},
									{3,"Bussines"},
									{4,"Primera Clase"}};

	eStatusFlight estadoVuelo[3]={{1,"A horario."},
								  {2,"Demorado"},
								  {3,"Cancelado"},};
	int id;
	char name[51];
	char lastName[51];
	float price;
	int typePassenger;
	char flycode[11];
	int flagCardaDatos=0;
	int idBaja;
	int verifIdBaja;
	int verifCargaPasajeros;
	int verifBajaPasajeros;
	int verifModificacionPasajeros;
	int retornoOpcion;

	InitPassenger(passenger, LEN);

	do
	{
		system("cls");
		retornoOpcion = PrintMenu();

		switch(retornoOpcion)
			{
				case 1:
					system("cls");
					if(IdIncremental<LEN)
					{
						id = eAlbum_ObtenerID();
						get_cadena(name, "\nIngrese el nombre del pasajero: ");
						get_cadena(lastName, "\nIngrese el apellido del pasajero: ");
						price = get_floatPositivo("\nIngrese el precio del vuelo: $");
						get_cadenaMaxCaracteres(flycode, "\nIngrese el codigo de vuelo (codigo de 10 caracteres): ", 10);
						typePassenger = get_intMaxMin("\nIngrese el tipo de pasajero (1-Turista/ 2-Premium Economica/ 3-Bussines/ 4-Primera Clase)",4,1);
						verifCargaPasajeros = addPassenger(passenger,LEN,id,name,lastName,price, typePassenger, flycode);
						if(verifCargaPasajeros == 0)
						{
							printf("\nEl pasajero ha sido cargado correctamente.");
							printf("\nSu id es %d, guardelo en caso de querer modificar datos o dar de baja un pasajero.", id);
							system("pause");
						}
					}else{
						printf("\nError. Se alcanzo la cantidad maxima de pasajeros a cargar.");
					}
					flagCardaDatos = 1;
					system("pause");
					break;

				case 2:
					system("cls");
					if(flagCardaDatos == 1)
					{
						id=get_int("\nIngrese el id que desea modificar: ");
						verifModificacionPasajeros = modificarPassenger(passenger,LEN,id);
						if(verifModificacionPasajeros == 0)
						{
							printf("\nEl pasajero ha sido modificado correctamente.");
						}else{
							printf("\nSe produjo un error, el pasajero no ha sido modificado");
						}

					}else{
						printf("\nNo se a cargado ningun pasajero. Por favor ingrese la opcion 1.");
					}
					system("pause");
					break;


				case 3:
					system("cls");
					if(flagCardaDatos == 1)
					{
						idBaja = get_intPositivo("\nIngrese el id a dar de baja;");
						verifIdBaja = findPassengerById(passenger,LEN,idBaja);
						while(verifIdBaja !=0)
						{
							printf("\nError. El id ingresado no se a encontrado.");
							idBaja = get_intPositivo("\nVuelva a ingresar un id: ");
						}

						verifBajaPasajeros = removePassenger(passenger,LEN, verifIdBaja);

						if(verifBajaPasajeros == 0)
						{
							printf("\nEl pasajero ha sido eliminado con exito.");
						}else{
							printf("\nSe ha producido un error en la baja del pasajero.");
						}
					}else{
						printf("\nNo se a cargado ningun pasajero. Por favor ingrese la opcion 1.");
					}
					system("pause");
					break;


				case 4:
					system("cls");
					//MostrarPasajero (passenger, TAM);
					break;
				case 5:


					printf("\n5.Gracias por volar con nosotros.\n");
					system("pause");
					break;
				default:
					printf("\nOpcion no valida. Reingrese una opcion.");
					break;

			}
	}while(retornoOpcion != 5);


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

