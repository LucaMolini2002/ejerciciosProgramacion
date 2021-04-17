/*
 * persona.h
 *
 *  Created on: 13 abr. 2021
 *      Author: Luk
 */

#ifndef PERSONA_H_
#define PERSONA_H_

typedef struct
{
	char nombre[50];
	char apellido[50];
	float altura;
	float peso;
}Persona;

int per_alta(Persona aPersonas[],int limite,int indice, char nombre[],char apellido[],float altura,float peso);

#endif /* PERSONA_H_ */
