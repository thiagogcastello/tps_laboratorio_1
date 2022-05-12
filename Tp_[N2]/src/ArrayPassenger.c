#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ArrayPassenger.h"
#include "input.h"

int InitPassenger(ePassenger passenger[], int len)
{
	int retorno=-1;
	int i;
	if(passenger != NULL && len > 0)
	{
		for(i=0;i<len;i++)
		{
			passenger[i].isEmpty=0;
		}
		retorno = 0;
	}
	return retorno;
}

int addPassenger(ePassenger list[], int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[])
{
	int rtn = -1;

	if(list!=NULL && len>=0)
	{
		for(int i=0;i<len;i++)
		{
			if(list[i].isEmpty == 0)
			{
				list[i].isEmpty = 1;
				list[i].id=id;
				strcpy(list[i].name,name);
				strcpy(list[i].lastName,lastName);
				list[i].price = price;
				list[i].typePassenger = typePassenger;
				strcpy(list[i].flycode,flycode);
				rtn = 0;
				break;
			}
		}
	}

	return rtn;
}


int findPassengerById(ePassenger list[], int len, int id)
{
	int rtn = -1;

	if(list!=NULL && len >= 0)
	{
		for(int i = 0;i<len;i++)
		{
			if(list[i].id == id)
			{
				rtn = id;
			}
		}
	}
		return rtn;
}

int removePassenger(ePassenger list[], int len, int id)
{
	int rtn = -1;
	int idBaja;

	if(list!=NULL && len >= 0)
	{
		idBaja = findPassengerById(list,len,id);
		if(idBaja == -1 || list[idBaja].isEmpty == 0)
		{
			printf("El id ingresado no ha sido encontrado.");
		}else{

			list[idBaja].isEmpty=0;
			rtn=0;
		}
	}
	return rtn;
}

int sortPassenger(ePassenger list[], int len, int order)
{
	int rtn = -1;
	if(list!=NULL && len > 0)
	{
		if(order == 1) //de mayor a menor
		{

		}else{ //de menor a mayor

		}
	}
	return rtn;
}

int submenuModificaciones()
{
	int opcion;

	printf("\nQue campo desea modificar?");
	printf("\n\t1.Nombre del pasajero.");
	printf("\n\t2.Apellido del pasajero.");
	printf("\n\t3.Precio del vuelo:");
	printf("\n\t4.Tipo de pasajero.");
	printf("\n\t5.Codigo de vuelo.");
	printf("\n\t6.Salir.");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}


int modificarPassenger(ePassenger list[], int len, int id)
{
	int rtn= -1;
	int idModif;
	int opcion;
	char opsalida='n';

	if(list != NULL && len>0)
	{
		idModif = findPassengerById(list,len,id);

		if(idModif == -1 || list[idModif].isEmpty == 0)
		{
			printf("El id ingresado no ha sido encontrado.");
		}else{

			do
			{
				opcion = submenuModificaciones();
				switch(opcion)
				{
				case 1:

					get_cadena(list[id].name, "\nIngrese el nombre del pasajero: ");
					printf("Se a modificado con exito\n");
					break;

				case 2:

					get_cadena(list[id].lastName, "\nIngrese el apellido del pasajero: ");

					printf("Se a modificado con exito\n");
					break;

				case 3:
					list[id].price = get_floatPositivo("\nIngrese el precio del vuelo: ");
					printf("Se a modificado con exito\n");
					break;

				case 4:
					list[id].typePassenger = get_intMaxMin("\nIngrese el tipo de pasajero (1-Turista/ 2-Premium Economica/ 3-Bussines/ 4-Primera Clase)",4,1);
					printf("Se a modificado con exito\n");
					break;

				case 5:
					get_cadenaMaxCaracteres(list[id].flycode, "\nIngrese el codigo de vuelo (codigo de 10 caracteres): ", 10);
					printf("Se a modificado con exito\n");
					break;
				case 6:

					opsalida = get_char("Desea salir? s/n: ");
					opsalida=tolower(opsalida);
					break;
				}

			}while(opsalida!='s');
			rtn=0;
		}
	}
	return rtn;
}









