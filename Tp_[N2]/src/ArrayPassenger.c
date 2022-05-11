#include <stdio.h>
#include <stdlib.h>
#include "ArrayPassenger.h"
#include "input.h"

static int IdIncremental = 162;
static int eAlbum_ObtenerID();
static int eAlbum_ObtenerID()
{
	return IdIncremental++;
}


int InitPassenger(ePassenger passenger[], int tam)
{
	int retorno=-1;
	int i;
	if(passenger != NULL)
	{
		for(i=0;i<tam;i++)
		{
			passenger[i].isEmpty=0;
		}
		retorno = 0;
	}
	return retorno;
}

int passenger_BuscarEspacioLibre(ePassenger passenger[], int tam)
{
	int retorno=-1;
	int i;

	if(passenger != NULL)
	{
		if(tam>=0)
		{
			for(i=0;i<tam;i++)
			{
				if(passenger[i].isEmpty == 0)
				{
					retorno=i;
					break;
				}
			}
		}
	}
	return retorno;
}


int addPassenger(ePassenger list[], int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[])
{
	int rtn = -1;

	if(list!=NULL && len>=0)
	{
		passenger_BuscarEspacioLibre(list,len);
	}

	return rtn;
}


int findPassengerById(ePassenger list[], int len, int id)
{
	int rtn = -1;

	if(list!=NULL && len>=0)
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

	if(list!=NULL && len>=0)
	{
		for(int i = 0;i<len;i++)
		{
			if(list[i].id == id)
			{
				list[i].isEmpty=0;
				rtn=0;
			}
		}
	}
		return rtn;
}
