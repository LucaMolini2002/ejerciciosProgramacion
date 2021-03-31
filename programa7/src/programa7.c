/*
 ============================================================================
 Name        : programa7.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h" //para mis bibliotecas se usan ""


int main(void) {

	setbuf(stdout,NULL);

	int numero;

	if(utn_getInt(&numero,"Ingrese edad:","error","error, quiere ingresar otro numero?",0,99)!=-1)
	{
		printf("ingresaste %d",numero);
	}

}


