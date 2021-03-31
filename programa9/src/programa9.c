/*
 ============================================================================
 Name        : programa9.c
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
	int acumuladorEdades=0;
	float promedioEdades;


	for(int i=0;i<EDADESSIZE;i++)
	{
		if(utn_getInt(edades[i],"Ingrese edad:","Error\n",0,150,3)==0){
			edad=edades[i];
		}

	}
		for(int i=0;i<EDADESSIZE;i++){
			arr_calcularPromedioInt(edades[i],EDADESSIZE,&edad);
		}

		promedioEdades=(float)acumuladorEdades/EDADESSIZE;

		printf("La edad promedio es %f",promedioEdades);
	return EXIT_SUCCESS;
}
