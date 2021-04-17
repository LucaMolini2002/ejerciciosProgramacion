/*
 ============================================================================
 Name        : Programa2.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DTY_PERSONAS 5


typedef struct
{
	float medida;
	float peso;
	char nombre[50];
}Persona;


int CalcularMaxMedida(float* array,int limite, float* resultado,char nombre);
int CalcularMaxPeso(float* array,int limite, float* resultado,char nombre);

int main(void){
	setbuf(stdout,NULL);

	Persona arrayPersonas[DTY_PERSONAS];
	arrayPersonas[1].medida=1.58;
	arrayPersonas[1].peso=71.68;
	strncpy(arrayPersonas[1].nombre,"JUAN",50);

	float pesoMax;
	float alturaMax;
	float resultadoMedidas;
	float resultadoPesos;
	char nombreAlturaMax[50];
	char nombrePesoMax[50];


	for(int i=0;i<DTY_PERSONAS;i++)
	{
		if(i==0||arrayPersonas[i]>pesoMax){
			pesoMax=arrayPersonas.peso[i];
			strncpy(nombrePesoMax,arrayPersonas.nombre[i],sizeof(nombrePesoMax));
			alturaPesoMax=arrayPersonas.peso[i];
		}
		if(i==0||arrayPersonas[i]>alturaMax){
			alturaMax=arrayPersonas.medida[i];
			strncpy(nombreAlturaMax,arrayPersonas.nombre[i],sizeof(nombrePesoMax));
			pesoAlturaMax=arrayPersonas.medida[i];
		}
	}

	if(CalcularMaxMedida(arrayPersonas.medida,DTY_PERSONAS,&resultadoMedidas,arrayPersonas.nombre)==0)
	{
		alturaMax=resultadoMedidas;

	}else{
		printf("error");
	}

	if(CalcularMaxPeso(arrayPersonas.peso,DTY_PERSONAS,&resultadoPesos,arrayPersonas.nombre)==0)
	{
		pesoMax=resultadoPesos;
	}else{
		printf("error");
	}


	return EXIT_SUCCESS;
}

	int CalcularMaxMedida(float* array,int limite, float* resultado,char nombre)
	{
		int i;
		int retorno=-1;
		float maximo;
		if(array!=NULL&&limite>0&&resultado!=NULL){
			maximo=array[0];
			for(i=0;i<limite;i++){
				if(array[i]>maximo){
					maximo=array[i];
				}
			}
			*resultado=maximo;
			retorno=0;
		}

		return retorno;
	}

	int CalcularMaxPeso(float* array,int limite, float* resultado, char nombreAlturaMax)
	{
		int i;
		int retorno=-1;
		float maximo;
		if(array!=NULL&&limite>0&&resultado!=NULL){
			maximo=array[0];
			for(i=0;i<limite;i++){
				if(array[i]>maximo){
					maximo=array[i];
				}
			}
			*resultado=maximo;
			nombre[i]=nombre
			retorno=0;
		}

		return retorno;
	}

