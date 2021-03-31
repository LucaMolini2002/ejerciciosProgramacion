/*
 ============================================================================
 Name        : programa8.c
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

	int edad;
	if(utn_getInt(&edad,"edad?","error ",0,150,2)==0)
	{
		printf("La edad es %d",edad);
	}

}
