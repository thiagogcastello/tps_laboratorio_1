/*
 * funciones.h
 *
 *  Created on: 6 abr. 2022
 *      Author: thiag
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_
/// @fn float CalcularPrecioDebito(float)
/// @brief calcula el precio total con el descuento del uso de debito.
///
/// @param precio
/// @return
float CalcularPrecioDebito(float precio);

/// @fn float CalcularPrecioCredito(float)
/// @brief calcula el precio total con la recarga del uso de tarjetas de credito
///
/// @param precio
/// @return
float CalcularPrecioCredito (float precio);

/// @fn float CalcularPrecioBitcoin(float)
/// @brief
///
/// @param precio
/// @return
float CalcularPrecioBitcoin (float precio);

/// @fn float CalcularPrecioXunidad(float, float)
/// @brief calcula el precio en bitcoin
///
/// @param unidades
/// @param precio
/// @return
float CalcularPrecioXunidad (float unidades, float precio);

/// @fn float DiferenciaEntreNumeros(float, float)
/// @brief calcula la diferencia entre dos enteros.
///
/// @param numeroUno
/// @param numeroDos
/// @return
float DiferenciaEntreNumeros (float numeroUno, float numeroDos);






#endif /* CALCULOS_H_ */
