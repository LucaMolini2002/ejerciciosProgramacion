/*
 * persona.c
 *
 *  Created on: 13 abr. 2021
 *      Author: Luk
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char nombre[50];
	char apellido[50];
	float altura;
	float peso;
}Persona;

/* \brief Carga valores inciales en el array
 * \param persona[] aPersona: puntero a estructura
 * \param int limite: limite del array
 * \param int indice: iondica en que posicion cargar los datos
 * \param char[] nombre: es el nombre de la persona
 * \param char[] apeliido: es el apellido de la persona
 * \param float altura: es la altura de la persona en metros
 * \param float peso: es el peso de la persona en kilos
 * \return int
 */
int per_alta(Persona aPersonas[],int limite,int indice, char nombre[],char apellido[],float altura,float peso)
{
	int retorno=-1;
	if(     aPersonas!=NULL&&
			limite>0&&
			indice>=0 &&
			indice<limite &&
			nombre!=NULL &&
			apellido!=NULL &&
			altura>0 &&
			peso>0)
	{
		strcpy(aPersonas[indice].nombre,"Juan");
		strcpy(aPersonas[indice].apellido,"Perez");
		aPersonas[indice].altura=1.71;
		aPersonas[indice].peso=62;
		retorno=0;
	}
	return retorno;
}

