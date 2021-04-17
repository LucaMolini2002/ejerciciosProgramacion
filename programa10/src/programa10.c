/*
 ============================================================================
 Name        : programa10.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "arr.h"

#define EDADESSIZE 5

int main(void) {
	setbuf(stdout,NULL);
	int edad;
	int edades[EDADESSIZE];
	int resultado;

	for(int i=0;i<EDADESSIZE;i++)
	{
		if(utn_getInt(&edad,"Ingrese edad:\n","Error\n",0,120,3)==0)
		{
			edades[i] = edad;
		}

	}

	if(arr_calcularMinimoInt(edades,EDADESSIZE,&resultado)==0)
	{
		printf("El minimo es: %d\n",resultado);

	}
	else{
		printf("Error");
	}

	if(arr_Ordenar(edades,EDADESSIZE)==0)
	{
		for(int i=0;i<EDADESSIZE;i++){
			printf("Indice: %d valor: %d\n", i, edades[i]);
		}

	}
	else{
		printf("Error");
	}


	return EXIT_SUCCESS;
}
