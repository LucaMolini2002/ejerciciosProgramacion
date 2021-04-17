/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: Luca
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos){

	int retorno=-1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo){

		retorno=-2;

		do{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%d",&bufferInt);
			if(bufferInt>=minimo&&bufferInt <= maximo){
				retorno=0;
				*pResultado=bufferInt;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>0);
	}
	return retorno;
}
int utn_getFloat(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos){
	int retorno=-1;
	int bufferFloat;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo){

		retorno=-2;

		do{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%f",&bufferFloat);
			if(bufferFloat>=minimo&&bufferFloat <= maximo){
				retorno=0;
				*pResultado=bufferFloat;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>0);
	}
	return retorno;
}
