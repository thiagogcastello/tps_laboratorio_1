/*
 ============================================================================
 TP N°1 Programacion 1.
 Thiago Gonzalez Castello.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Calculos.h"
#include "Menu_Pedidos.h"

#define kmCF 7090
#define precioArgCF 162965
#define precioLatamCF 159339

float PedirDatosValidarMayorCero(char mensaje[]);
int VerificarFlagToF (int flag, char mjeError[]);
float CalcularPrecioDebito(float precio);
float CalcularPrecioCredito (float precio);
float CalcularPrecioBitcoin (float precio);
float CalcularPrecioXunidad (float unidades, float precio);
float DiferenciaEntreNumeros (float numeroUno, float numeroDos);
int PrintearMenuInicio(float km, float precioLatam, float precioAeroArg, int flagKm, int flagPreciosVuelos);



int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	float kilometros;
	float precioLatam;
	float precioAeroArg;
	int flagCargaDatos;
	int flagKm;
	int kmCargaDatos;
	int flagPreciosVuelos;
	int PreciosCargaDatos;
	float precioDebitoUno;
	float precioCreditoUno;
	float precioBtcUno;
	float precioUnidadUno;
	float precioDebitoDos;
	float precioCreditoDos;
	float precioBtcDos;
	float precioUnidadDos;
	float diferenciaEntrePrecios;
	float precioDebitoUnoCF;
	float precioCreditoUnoCF;
	float precioBtcUnoCF;
	float precioUnidadUnoCF;
	float precioDebitoDosCF;
	float precioCreditoDosCF;
	float precioBtcDosCF;
	float precioUnidadDosCF;
	float diferenciaEntrePreciosCF;

	kilometros = 0;
	precioLatam=0;
	precioAeroArg=0;
	flagCargaDatos = 0;
	flagPreciosVuelos=0;
	flagKm=0;


	do{
		system("cls");
		opcion = PrintearMenuInicio(kilometros, precioLatam, precioAeroArg, flagKm, flagPreciosVuelos);

		switch(opcion)
		{
			case 1:
				system("cls");

				kilometros = PedirDatosValidarMayorCero("Ingrese los Kms: \n");
				flagKm = 1;
				flagCargaDatos = 0;
				break;
			case 2:
				system("cls");

				precioLatam = PedirDatosValidarMayorCero("Ingrese El precio del vuelo en Aeroliea Latam: $\n");
				precioAeroArg = PedirDatosValidarMayorCero("Ingrese El precio del vuelo en Aerolineas Argentinas: $\n");
				flagPreciosVuelos = 1;
				flagCargaDatos = 0;
				break;
			case 3:
				system("cls");

				printf("Se estan cargando los datos...\n\n");
				Sleep(500);
				kmCargaDatos = VerificarFlagToF(flagKm,"Error en la carga, no se ingresaron los Kms. Ingrese la opcion 1.\n");
				PreciosCargaDatos = VerificarFlagToF(flagPreciosVuelos, "Error en la carga, no se ingresaron los precios. Ingrese la opcion 2.\n");
				if(kmCargaDatos == 1 && PreciosCargaDatos == 1)
				{
					flagCargaDatos = 1;
					precioDebitoUno = CalcularPrecioDebito(precioLatam);
					precioCreditoUno = CalcularPrecioCredito(precioLatam);
					precioBtcUno = CalcularPrecioBitcoin(precioLatam);
					precioUnidadUno = CalcularPrecioXunidad(kilometros, precioLatam);
					precioDebitoDos = CalcularPrecioDebito(precioAeroArg);
					precioCreditoDos = CalcularPrecioCredito(precioAeroArg);
					precioBtcDos = CalcularPrecioBitcoin(precioAeroArg);
					precioUnidadDos = CalcularPrecioXunidad(kilometros, precioAeroArg);
					diferenciaEntrePrecios = DiferenciaEntreNumeros(precioLatam, precioAeroArg);

					printf("Carga realizada con exito.\n");
				}

				system("pause");
				break;
			case 4:
				system("cls");

				if(VerificarFlagToF(flagCargaDatos, "Los datos no han sido cargados, ingrese la opcion 3.\n")==1)
				{
					PrintearMenuDatosCargados(kilometros, precioLatam, precioDebitoUno, precioCreditoUno, precioBtcUno, precioUnidadUno, precioAeroArg, precioDebitoDos,precioCreditoDos, precioBtcDos,precioUnidadDos, diferenciaEntrePrecios);
				}

				system("pause");
				break;
			case 5:
				system("cls");

				precioDebitoUnoCF = CalcularPrecioDebito(precioLatamCF);
				precioCreditoUnoCF = CalcularPrecioCredito(precioLatamCF);
				precioBtcUnoCF = CalcularPrecioBitcoin(precioLatamCF);
				precioUnidadUnoCF = CalcularPrecioXunidad(kmCF, precioLatamCF);
				precioDebitoDosCF = CalcularPrecioDebito(precioArgCF);
				precioCreditoDosCF = CalcularPrecioCredito(precioArgCF);
				precioBtcDosCF = CalcularPrecioBitcoin(precioArgCF);
				precioUnidadDosCF = CalcularPrecioXunidad(kmCF, precioArgCF);
				diferenciaEntrePreciosCF = DiferenciaEntreNumeros(precioLatamCF, precioArgCF);

				PrintearMenuDatosCargados(kmCF, precioLatamCF, precioDebitoUnoCF, precioCreditoUnoCF, precioBtcUnoCF, precioUnidadUnoCF, precioArgCF, precioDebitoDosCF,precioCreditoDosCF, precioBtcDosCF,precioUnidadDosCF, diferenciaEntrePreciosCF);

				system("pause");

				break;
			case 6:
				system("cls");

				printf("\nGracias. Vuelva Pronto.\n\n");

				system("pause");

				break;
			default:
				printf("\nOpcion no valida, reingrese una opcion por favor:\n\n");
				system("pause");

				break;
		}

	}while(opcion != 6);

	return 0;
}




