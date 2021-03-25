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

int main(void) {
	setbuf(stdout,NULL);

	int edad=5;
	int resultado;
	//int* pEdad;

	//pEdad=&edad;

	//printf("DIR %p - valor: %d",&edad,edad);
	//printf("\nDIR %p - valor: %d",pEdad, *pEdad);

	if(dividir(2,3,&resultado)==0){
		printf("ok");
	}else{
		printf("error");
	}

	return EXIT_SUCCESS;
}

int dividir(int numeroA,int numeroB,int* pResultado){

	*pResultado=numeroA+numeroB;

	return 0;
}
