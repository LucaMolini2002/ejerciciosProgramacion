/*
 * utn.c
 *
 *  Created on: 6 abr. 2021
 *      Author: Luk
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,
		     	 int minimo,int maximo,int reintentos){

	int retorno=-1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos>=0){

		retorno=-2;
		do{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%d",&bufferInt);
			if(bufferInt>=minimo && bufferInt <= maximo){
				retorno=0;
				*pResultado=bufferInt;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos<=0);
	}
	return retorno;
}
