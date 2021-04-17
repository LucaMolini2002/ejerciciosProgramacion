/*
 ============================================================================
 Name        : programa3.c
 Author      : Luca
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int validarQueSeaNumero(char texto[])
{
	int retorno=-1;
	int i=0;
​
	if(texto!=NULL)
	{
		retorno=1; // sopongo que esta ok
		while(texto[i]!='\0')
		{
			// detecto simbolo erroneo (fuera del rango 0-9)
			//0,1,2.........48,49,.....57,58,.......127
			//              0  1        9
​
			//if(texto[i]<48 || texto[i]>57)
			if(texto[i]<'0' || texto[i]>'9')
			{
				// HAY UN ERROR
				retorno=-1;
				break;
			}
			i++;
		}
	}
	return retorno;
}
​
int main(void) {
​
	int i;
	char texto[11];
	int saldoDelBanco=1;
​
	fgets(texto,11,stdin);
	// validar que sean todos los caracteres numericos (del 0 al 9)
	if(validarQueSeaNumero(texto)==1)
	{
		saldoDelBanco = atoi(texto);
	}
​
	printf("\ntenes %d pesos",saldoDelBanco);
​
	return EXIT_SUCCESS;
}


