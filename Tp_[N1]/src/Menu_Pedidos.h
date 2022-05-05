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
/// @return retorna el numero validado mayor a cero
float ValidarDatoMayorACero(float numero);

/// @fn float PedirDatosValidarMenorCero(char[])
/// @brief pide un dato numerico con el mensaje que se le ingrese como parametro y lo devuelve validado en el rango
///
/// @param mensaje
/// @return retorna el dato pedido, validado mayor a cero
float PedirDatosValidarMayorCero(char mensaje[]);

/// @fn int VerificarFlagToF(int, char[])
/// @brief verifica si una flag es V o F
///
/// @param flag
/// @param mjeError
/// @return 1 en caso de verdadero, 0 en caso de falso
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

/// @fn int PrintearMenuInicio(float, float, float, int, int)
/// @brief
///
/// @param km
/// @param precioLatam
/// @param precioAeroArg
/// @param flagKm
/// @param flagPreciosVuelos
/// @return la opcion selecionada del menu
int PrintearMenuInicio(float km, float precioLatam, float precioAeroArg, int flagKm, int flagPreciosVuelos);





#endif /* FUNCIONES_H_ */
