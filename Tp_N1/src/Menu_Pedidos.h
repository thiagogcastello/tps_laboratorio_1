/*
 * menus_pedidodatos.h
 *
 *  Created on: 6 abr. 2022
 *      Author: thiag
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/// @fn float ValidarDatoMenorACero(float)
/// @brief valida si el numero ingresado es mayor a cero
///
/// @param numero
/// @return
float ValidarDatoMenorACero(float numero);

/// @fn float PedirDatosValidarMenorCero(char[])
/// @brief pide un dato numerico con el mensaje que se le ingrese como parametro
///
/// @param mensaje
/// @return
float PedirDatosValidarMenorCero(char mensaje[]);

/// @fn int VerificarFlagToF(int, char[])
/// @brief verifica si una flag es V o F
///
/// @param flag
/// @param mjeError
/// @return
int VerificarFlagToF (int flag, char mjeError[]);

/// @fn void PrintearMenuDatosCargados(float, float, float, float, float, float, float, float, float, float, float, float)
/// @brief printea el menu de datos una vez ya cargados
///
/// @param unidades
/// @param precioUno
/// @param precioDebitoUno
/// @param precioCreditoUno
/// @param precioBtcUno
/// @param precioUnidadUno
/// @param precioDos
/// @param precioDebitoDos
/// @param precioCreditoDos
/// @param precioBtcDos
/// @param precioUnidadDos
/// @param diferenciaEntrePrecios
void PrintearMenuDatosCargados(float unidades, float precioUno, float precioDebitoUno, float precioCreditoUno, float precioBtcUno, float precioUnidadUno, float precioDos, float precioDebitoDos,float precioCreditoDos, float precioBtcDos,float precioUnidadDos, float diferenciaEntrePrecios);







#endif /* FUNCIONES_H_ */
