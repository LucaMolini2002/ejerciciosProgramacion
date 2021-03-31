/*
 * utn.c
 *
 *  Created on: 30 mar. 2021
 *      Author: Luk
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,
		     	 int minimo,int maximo,int reintentos){

	int retorno=-1;
	char bufferChar;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo&& reintentos>=0){

		retorno=-2;

		do{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%d",&bufferChar);
			if(bufferChar>=minimo&&bufferChar <= maximo){
				retorno=0;
				*pResultado=bufferChar;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>=0);
	}
	return retorno;
}


