/*
 * arr.c
 *
 *  Created on: 30 mar. 2021
 *      Author: Luk
 */
#include <stdio.h>
#include <stdlib.h>

int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
	int i;
	float resultado;
	int acc=0;

	for(i=0;i<limite;i++){
		acc+=array[i];
	}
	resultado=(float)acc/limite;
}

int arr_calcularPromedioInt(int* array,int limite, int* resultado)
{
	int resultado;
	int limite;

	for(int i=0;i<limite;i++){
		array<limite;
	}
}
