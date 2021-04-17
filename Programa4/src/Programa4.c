/*
 ============================================================================
 Name        : Programa4.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "utn.h"

#define CANTIDAD_EMPLEADOS 5



int main(void) {
	setbuf(stdout,NULL);
	int i;

	float alturaMaxima;
	int indiceAlturaMaxima;

	float pesoMaximo;
	int indicePesoMaximo;

	Persona arrayEmpleados[CANTIDAD_EMPLEADOS];

	per_alta(arrayEmpleados, CANTIDAD_EMPLEADOS, 0, "Ricky", "Fernandez", 1.76, 79);

	/*
	strcpy(arrayEmpleados[1].nombre,"lala");
	strcpy(arrayEmpleados[1].apellido,"papa");
	arrayEmpleados[1].altura=1.10;
	arrayEmpleados[1].peso=45;

	strcpy(arrayEmpleados[2].nombre,"lolo");
	strcpy(arrayEmpleados[2].apellido,"popo");
	arrayEmpleados[2].altura=1.93;
	arrayEmpleados[2].peso=71;

	strcpy(arrayEmpleados[3].nombre,"lili");
	strcpy(arrayEmpleados[3].apellido,"pipi");
	arrayEmpleados[3].altura=1.85;
	arrayEmpleados[3].peso=88;

	strcpy(arrayEmpleados[4].nombre,"lulu");
	strcpy(arrayEmpleados[4].apellido,"pupu");
	arrayEmpleados[4].altura=1.73;
	arrayEmpleados[4].peso=70;*/


	for(i=0;i<CANTIDAD_EMPLEADOS;i++)
		{
			if(i==0 || arrayEmpleados[i].altura > alturaMaxima)
			{
				alturaMaxima =  arrayEmpleados[i].altura;
				indiceAlturaMaxima=i;
			}

			if(i==0 ||arrayEmpleados[i].peso > pesoMaximo)
			{
				pesoMaximo = arrayEmpleados[i].peso;
				indicePesoMaximo=i;

			}
		}

		printf("La persona mas alta es: %s %s con %.2f M y pesa %.2f KL\n",arrayEmpleados[indiceAlturaMaxima].nombre,arrayEmpleados[indiceAlturaMaxima].apellido,arrayEmpleados[indiceAlturaMaxima].altura,arrayEmpleados[indiceAlturaMaxima].peso);
		printf("La persona mas pesada es: %s %s con %.2f M y pesa %.2f KL",arrayEmpleados[indicePesoMaximo].nombre,arrayEmpleados[indicePesoMaximo].apellido,arrayEmpleados[indicePesoMaximo].altura,arrayEmpleados[indicePesoMaximo].peso);
	return EXIT_SUCCESS;
}
