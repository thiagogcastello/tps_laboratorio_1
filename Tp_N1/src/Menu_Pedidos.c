
#include <stdio.h>
#include <stdlib.h>

#include "Calculos.h"

float PedirDatosValidarMenorCero(char mensaje[]);
float ValidarDatoMenorACero(float numero);
int VerificarFlagToF (int flag, char mjeError[]);
void PrintearMenuDatosCargados(float unidades, float precioUno, float precioDebitoUno, float precioCreditoUno, float precioBtcUno, float precioUnidadUno, float precioDos, float precioDebitoDos,float precioCreditoDos, float precioBtcDos,float precioUnidadDos, float diferenciaEntrePrecios);



float PedirDatosValidarMenorCero(char mensaje[])
{
	float numero;
	printf(mensaje);
	scanf("%f", &numero);
	numero = ValidarDatoMenorACero(numero);
	return numero;
}

float ValidarDatoMenorACero(float numero)
{
	while(numero<0)
	{
		printf("Error. Ingrese un valor mayor a 0:");
		scanf("%f", &numero);
	}
	return numero;
}



void PrintearMenuDatosCargados(float unidades, float precioUno, float precioDebitoUno, float precioCreditoUno, float precioBtcUno, float precioUnidadUno, float precioDos, float precioDebitoDos,float precioCreditoDos, float precioBtcDos,float precioUnidadDos, float diferenciaEntrePrecios)
{
	printf("\n\nKms Ingresados : %.2f km.\n\n", unidades);
	printf("Precio Latam: $%.2f.\n", precioUno);
	printf("a) Precio con tarjeta de debito: $%.2f.\n", precioDebitoUno);
	printf("b) Precio con tarjeta de credito: $%.2f.\n", precioCreditoUno);
	printf("c) Precio pagando con bitcoin : %f btc.\n", precioBtcUno);
	printf("d) Precio unitario: $%.2f\n\n", precioUnidadUno);
	printf("Precio Aerolineas: $%.2f.\n", precioDos);
	printf("a) Precio con tarjeta de debito: $%.2f.\n", precioDebitoDos);
	printf("b) Precio con tarjeta de credito: $%.2f.\n", precioCreditoDos);
	printf("c) Precio pagando con bitcoin : %f btc.\n", precioBtcDos);
	printf("d) Precio unitario: $%.2f\n\n", precioUnidadDos);
	printf("e)La diferencia de precio es : $%.2f\n\n\n", diferenciaEntrePrecios);
}



int VerificarFlagToF (int flag, char mjeError[])
{
	int retorno;
	if(flag == 0)
	{
		retorno = 0;
		printf(mjeError);
	}else{
		retorno=1;
	}
	return retorno;
}

int PrintearMenuInicio(float km, float precioLatam, float precioAeroArg, int flagKm, int flagPreciosVuelos)
		{
			int retorno;

			if(flagKm == 0)
			{
				printf("1.Ingresar Kilometros. (km = x)");
			}else{
				printf("1.Ingresar Kilometros. (km = %.2f)", km);
			}
			if(flagPreciosVuelos == 0)
			{
				printf("\n2. Ingresar Precio de Vuelos: (Aerolineas=y, Latam=z)");
			}else{
				printf("\n2.Ingresar Precio de Vuelos: (Aerolineas= $%.2f, Latam= $%.2f)", precioLatam, precioAeroArg);
			}
			printf("\n3.Calcular todos los costos. ");
			printf("\n\ta) Tarjeta de debito. (descuento 10%c)", 37);
			printf("\n\tb) Tarjeta de credito. (interes 25%c)", 37);
			printf("\n\tc) Bitcoin. (1BTC -> 4,508,394.68 Pesos Argentinos)");
			printf("\n\td) Mostrar precio por km. (precio unitario)");
			printf("\n\te) Mostrar diferencia de precio ingresada. (Latam - Aerolineas)");
			printf("\n4.Informar resultados. ");
			printf("\n5.Carga Forzada de datos. ");
			printf("\n6.Salir.");
			printf("\nIngrese una opcion: ");
			scanf("%d", &retorno);

			return retorno;
		}


