
#include <stdio.h>
#include <stdlib.h>

#include "Calculos.h"

float PedirDatosValidarMayorCero(char mensaje[])
{
	float numero;
	printf(mensaje);
	scanf("%f", &numero);
	numero = ValidarDatoMayorACero(numero);
	return numero;
}

float ValidarDatoMayorACero(float numero)
{
	while(numero<1)
	{
		printf("Error. Ingrese un valor mayor a 1:");
		scanf("%f", &numero);
	}
	return numero;
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

void PrintearMenuInicio()
{

}



