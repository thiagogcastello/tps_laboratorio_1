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

int InitPassenger(ePassenger passenger[], int tam);

int cargarPasajero(ePassenger array[], int tamanho);

#endif /* ARRAYPASSENGER_H_ */
