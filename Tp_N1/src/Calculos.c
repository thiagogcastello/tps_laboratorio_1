
#include <stdio.h>
#include <stdlib.h>
#include "Menu_Pedidos.h"


float CalcularPrecioDebito(float precio);
float CalcularPrecioCredito (float precio);
float CalcularPrecioBitcoin (float precio);
float CalcularPrecioXunidad (float unidades, float precio);
float DiferenciaEntreNumeros (float numeroUno, float numeroDos);




float CalcularPrecioDebito(float precio)
{
	float descuento;
	float descuentoParcial;
	float precioTotal;
	descuento = 0.10;

	descuentoParcial = descuento * precio;

	precioTotal = precio - descuentoParcial;

	return precioTotal;
}

float CalcularPrecioCredito (float precio)
{
	float interes;
	float interesParcial;
	float precioTotal;
	interes = 0.25;

	interesParcial = precio * interes;

	precioTotal = precio + interesParcial;

	return precioTotal;
}

float CalcularPrecioBitcoin (float precio)
{
	float btc;
	btc = 4508394.68;
	float precioTotal;

	precioTotal = precio / btc;

	return precioTotal;
}


float CalcularPrecioXunidad (float unidades, float precio)
{
	float precioXUnidad;
	if(precio == 0 || unidades == 0)
	{
		precioXUnidad = 0;
	}else{
		precioXUnidad = precio / unidades;
	}

	return precioXUnidad;
}

float DiferenciaEntreNumeros (float numeroUno, float numeroDos)
{
	float diferencia;

	if (numeroUno>numeroDos)
	{
		diferencia = numeroUno - numeroDos;
	}else{
		diferencia = numeroDos - numeroUno;
	}

	return diferencia;
}






