/*
 ============================================================================
 Name        : programa5.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=15;
	int b=3;
	float resultado;
	int retHuboError;

	printf("la direccion de resultado es: %p",&resultado);

	retHuboError=dividir(a,b,&resultado);
	if(retHuboError==0){
		printf("no se puede dividir");
	}else{
		printf("resultado: %f",resultado);
	}

	return EXIT_SUCCESS;
}

int dividir(int operadorA,int operadorB,int direccionVarRet)
{
	int resul;
	int huboError;
	printf("la direccion de resultado de funcion dividir es: %p",direccionVarRet);
	if(operadorB!=0){
		resul=(operadorA/operadorB);
		huboError=0;//no hubo error
	}
	else{
		huboError=1;//hubo error
	}
}
