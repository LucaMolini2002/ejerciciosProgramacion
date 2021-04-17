/*
 * utn.c
 *
 *  Created on: 13 abr. 2021
 *      Author: Luk
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int utn_getString (char* pResultado, char* mensaje, char* mensajeError)
{
	int retorno=-1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL)
	{
		retorno=-2;
		do{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%c",&bufferChar);
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
