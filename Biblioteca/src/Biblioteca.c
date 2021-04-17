/*
 ============================================================================
 Name        : Biblioteca.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	return EXIT_SUCCESS;
}

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			if(getInt(&bufferInt)==0&&bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;

		}while(reintentos >= 0);
	}
	return retorno;
}
static int getInt(int* pResultado)
{
	int retorno=-1;
	char bufferString[50];
	if(pResultado!=NULL)
	{
		if(myGets(bufferString,sizeof(bufferString))==0&&esNumerica(bufferString))
		{
			retorno=0;
			*pResultado=atoi(bufferString)
		}
	}
	return retorno;
}
static int esNumerica(char* cadena,int limite)
{
	int retorno=1;
	for(int i=0;i<limite&&cadena[i]!='\0';i++)
	{
		if(i==0&&(cadena[i]=='+'||cadena[i]=='-'))
		{
			continue;
		}
		if(cadena[i]>'9'||cadena[i]<'0')
		{
			retorno=0;
			break;
		}
	}

	return retorno;
}

static int myGets(char* cadena,int longitud)
{
	int retorno=-1;
	char bufferString[4000];
	if(cadena!=NULL&& longitud>0)
	{
		fflush(stdin);
		if(fgets(bufferString,sizeof(bufferString),stdin)!=NULL)
		{
			if(bufferString[strlen(bufferString)-1]=='\n')
			{
				bufferString[strlen(bufferString)-1]='\0';
			}
			if(strlen(bufferString)<=longitud)
			{
				strncpy(cadena,bufferString,longitud);
				retorno=0;
			}
		}

	}
	return retorno;
}
