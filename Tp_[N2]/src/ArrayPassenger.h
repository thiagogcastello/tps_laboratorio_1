/*
 * ArrayPassenger.h
 *
 *  Created on: 29 abr. 2022
 *      Author: thiag
 */

#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

typedef struct
{
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int statusFlight;
	int isEmpty;

}ePassenger;

typedef struct
{
	int codigoTipo;
	char descripcion[100];

}eTypePassenger;

typedef struct
{
	int codigoTipo;
	char descripcion[100];

}eStatusFlight;

int addPassenger(ePassenger list[], int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[]);

int InitPassenger(ePassenger passenger[], int len);

int findPassengerById(ePassenger list[], int len, int id);

int removePassenger(ePassenger list[], int len, int id);

int submenuModificaciones();

int modificarPassenger(ePassenger list[], int len, int id);

#endif /* ARRAYPASSENGER_H_ */
