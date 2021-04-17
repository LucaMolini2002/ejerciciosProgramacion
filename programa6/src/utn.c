/*
 * utn.c
 *
 *  Created on: 14 abr. 2021
 *      Author: Luk
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%d",&bufferInt);

			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
			}
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}

int utn_getChar(char* pLetra,char* pTexto,char* pError,int min,int max,char* reintento){
	int retorno=-1;
	do{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%c",pLetra)==1){
			if (*pLetra>=min && *pLetra<=max)
			{
				retorno= 0;
				break;
			}else{
				printf("%s",pError);
				reintento--;
			}
		}else{
			printf("%s",pError);
			reintento--;
		}
	}
	while(reintento>0);

	return retorno;
}
/* \brief funcion para sumar dos numeros
 * \param int operadorA: recibe el primer numero
 * \param int operadorB: recibe el segundo numero
 * \param int* resultado: puntero que guarda el valor del resultado
 * \return int
 * */
int sumar(int operadorA,int operadorB,int* resultado)
{
	int retorno=0;
	*resultado=operadorA+operadorB;
	return retorno;
}
/* \brief funcion para restar dos numeros
 * \param int operadorA: recibe el primer numero
 * \param int operadorB: recibe el segundo numero
 * \param int* resultado: puntero que guarda el valor del resultado
 * \return int
 * */
int restar(int operadorA,int operadorB,int* resultado)
{
	int retorno=0;
	*resultado=operadorA-operadorB;
	return retorno;
}
/* \brief funcion para multiplicar dos numeros
 * \param int operadorA: recibe el primer numero
 * \param int operadorB: recibe el segundo numero
 * \param int* resultado: puntero que guarda el valor del resultado
 * \return int
 * */
int multiplicar(int operadorA,int operadorB,int* resultado){
	int retorno=0;
	*resultado=operadorA*operadorB;
	return retorno;
}
/* \brief funcion para dividir dos numeros
 * \param int operadorA: recibe el primer numero
 * \param int operadorB: recibe el segundo numero
 * \param float* resultado: puntero que guarda el valor del resultado
 * \return int
 * */
int dividir(int operadorA,int operadorB,float* resultado){
	int retorno=-1;
	if(operadorB!=0)
	{
		*resultado=(float)operadorA/operadorB;
		retorno=0;
	}
	return retorno;
}
/* \brief funcion para calcular factorial de un numero
 * \param int operadorA: recibe el primer numero
 * \param int* resultado: puntero que guarda el valor del resultado, y en las proximas vueltas del for se utiliza para realizar la operacion
 * \return int
 * */
int calcularFactorial(int operador,int* resultado)
{
	*resultado = 1;
	for(int i=operador; i>0; i--){
		*resultado *= i;
	}
	return 0;
}

