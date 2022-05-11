/*
 * generica.h
 *
 *  Created on: 30 abr. 2022
 *      Author: thiag
 */

#ifndef ESTRUC_GENERICA_H_
#define ESTRUC_GENERICA_H_

typedef struct{

	int IdGenerica;
	int isEmpty;

}eGenerica;

/**
 * @fn int eGenerica_Inicializar(eGenerica[], int)
 * @brief inicializa todos los isEmpty en 0, para que puedan ser ocupados
 *
 * @param array
 * @param tam
 * @return
 */
int eGenerica_Inicializar(eGenerica array[], int tam);

/**
 * @fn int eGenerica_BuscarEspacioLibre(eGenerica[], int)
 * @brief busca un espacio libre dentro del isEmpty del array, el primer espacio libre que encuentra lo toma para cargar
 *
 * @param array
 * @param tam
 * @return
 */
int eGenerica_BuscarEspacioLibre(eGenerica array[], int tam);

/**
 * @fn int eGenerica_Alta(eGenerica[], int)
 * @brief da de alta un eGenerico
 *
 * @param array
 * @param tam
 * @return
 */
int eGenerica_Alta(eGenerica array[], int tam);

/**
 * @fn int eGenerica_Modificar(eGenerica[], int, char[])
 * @brief pide el id a modificar y genera un submenu para seleccionar el dato que se desea modificar
 *
 * @param array
 * @param tam
 * @param mje
 * @return
 */
int eGenerica_Modificar(eGenerica array[], int tam, char mje[]);

/**
 * @fn int eGenerica_Baja(eGenerica[], int, char[])
 * @brief cambia el valor del isEmpy del array con el id que ingreso el usuario, a cero
 *
 * @param array
 * @param tam
 * @param mje
 * @return
 */
int eGenerica_Baja(eGenerica array[], int tam, char mje[]);

/**
 * @fn void eGenerica_MostrarUno(eGenerica)
 * @brief muestra una estructura en la posicion que le llega por parametro
 *
 * @param array
 */
void eGenerica_MostrarUno(eGenerica array);

/**
 * @fn int eGenerica_MostrarTodos(eGenerica[], int)
 * @brief muestra el array completo, con la funcion mostraruno dentro
 *
 * @param array
 * @param tam
 * @return int
 */
int eGenerica_MostrarTodos(eGenerica array[], int tam);



#endif /* ESTRUC_GENERICA_H_ */
