/*
 ============================================================================
 Name        : programa6.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar(int operadorA,int operadorB);
int restar(int operadorA,int operadorB);
int multiplicar(int operadorA,int operadorB);
float dividir(int operadorA,int operadorB);


int main(void) {
	setbuf(stdout,NULL);
	int numA;
	int numB;
	char operacion;
	int resultadoInt;
	float resultadoFloat;



	printf("\nIngrese un numero");
	fflush(stdin);
	scanf("%d",&numA);

	printf("\nIngrese un nuevo numero");
	fflush(stdin);
	scanf("%d",&numB);

	printf("\nIngrese operacion");
	fflush(stdin);
	scanf("%c",&operacion);

	switch(operacion){
		case 's':
		{
			resultadoInt=sumar(numA,numB);
			break;
		}
		case 'r':
		{
			resultadoInt=restar(numA,numB);
			break;
		}
		case 'm':
		{
			resultadoInt=multiplicar(numA,numB);
			break;
		}
		case 'd':
		{
			resultadoFloat=dividir(numA,numB);
			break;
		}
	}
	if(operacion=='d'){
		printf("\nEl resultado es: %f",resultadoFloat);
	}else{
		printf("El resultado es: %d",resultadoInt);
	}

}

int sumar(int operadorA,int operadorB){
	int resultado;
	resultado=operadorA+operadorB;
	return resultado;
}
int restar(int operadorA,int operadorB){
	int resultado;
	resultado=operadorA-operadorB;
	return resultado;
}
int multiplicar(int operadorA,int operadorB){
	int resultado;
	resultado=operadorA*operadorB;
	return resultado;
}
float dividir(int operadorA,int operadorB){
	float resultado;
	if(operadorB!=0){
		resultado=(float)operadorA/operadorB;
	}else{
		printf("\nError");
	}

	return resultado;
}
