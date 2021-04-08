/*
 * arr.c
 *
 *  Created on: 6 abr. 2021
 *      Author: Luk
 */

#include <stdio.h>
#include <stdlib.h>

int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int i;
	int retorno=-1;
	int minimo;
	if(array!=NULL&&limite>0&&resultado!=NULL){
		minimo=array[0];
		for(i=0;i<limite;i++){
			if(array[i]<minimo){
				minimo=array[i];
			}
		}
		*resultado=minimo;
		retorno=0;
	}

	return retorno;
}

int arr_Ordenar(int* array,int limite)
{
	int retorno=-1;
	int flagSwap;
	int bufferInt;
	if(array!=NULL && limite>0)
	{
		retorno=0;
		do{
			flagSwap=0;
			limite--;
			for(int i=0;i<limite;i++)
			{
				if(array[i]<array[i+1])
				{
					bufferInt=array[i];
					array[i]=array[i+1];
					array[i+1]=bufferInt;
					flagSwap=1;
				}
			}
			limite--;
		}while(flagSwap);
	}
	return retorno;
}
