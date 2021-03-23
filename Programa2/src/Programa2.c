/*
 ============================================================================
 Name        : Programa2.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL); // PONER SIEMPRE
	int maximo;
	int minimo;
	int bufferInt;
	int flag=TRUE;

	do{
		printf("un numero (\"888\" FINALIZA EL INGRESO): ");
		scanf("%d",&bufferInt);
		if(flag==TRUE){
			maximo=bufferInt;
			minimo=bufferInt;
			flag=FALSE;
		}
		else{
			if(bufferInt>maximo){
				maximo=bufferInt;
			}
			if(bufferInt<minimo){
				minimo=bufferInt;
			}
		}

	}
	while(888 != bufferInt);

	printf("\nEl valor minimo es: %d y el valor maximo es : %d",minimo,maximo);

	return 0;
}
