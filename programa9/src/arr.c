/*
 * arr.c
 *
 *  Created on: 30 mar. 2021
 *      Author: Luk
 */
#include <stdio.h>
#include <stdlib.h>

int arr_calcularPromedioInt(int* array[],int limite, float* resultado)
{
	int retorno=-1;
	int i;
	int acc=0;
	for(i=0;i<limite;i++){
		acc+=array[i];
	}
	*resultado=(float)acc/limite;
	return retorno=0;
}

int arr_calcularMaximoInt(int* array,int limite, int* resultado)
{
	int retorno=-1;
	int maximo;
	if(array!=NULL&&limite>0&&resultado!=NULL){
		maximo=array[0];
		for(int i=0;i<limite;i++){
			if(array[i]>maximo){
				maximo=array[i];
			}
		}
		*resultado=maximo;
		retorno=0;
	}

	return retorno;
}
int arr_calcularSumaInt(int* array,int limite, int* resultado)
{
	int retorno=-1;
	int acumulador=0;
	if(array!=NULL&&limite>0&&resultado!=NULL){

		for(int i=0;i<limite;i++){

			acumulador+=array[i];

		}
		*resultado=acumulador;
		retorno=0;
	}

	return retorno;
}
int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int retorno=-1;
	int minimo;
	if(array!=NULL&&limite>0&&resultado!=NULL){
		minimo=array[0];
		for(int i=0;i<limite;i++){
			if(array[i]>minimo){
				minimo=array[i];
			}
		}
		*resultado=minimo;
		retorno=0;
	}

	return retorno;
}

