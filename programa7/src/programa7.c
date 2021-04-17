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
#include <string.h>
#define QTY_PRODUCTO 200

typedef struct{
	char nombre[32];
	char descripcion[128];
	float precio;
	int flagIsEmpty;
}Producto;

void inicializarArray(Producto array,int limite)
{
	for(int i=0;i<limite;i++)
	{
		//array[i].nombre[0]=0;
		//array[i].descripcion[0]=0;
		//array[i].precio=0.0;
		array[i].flagIsEmpty=1;
	}
}

int main(void) {
	setbuf(stdout,NULL);

	Producto productos[200];
	int i;

	inicializarArray(productos,QTY_PRODUCTO);

	altaProducto(productos,QTY_PRODUCTO,i)
	{
		for(i=0;i<QTY_PRODUCTO;i++){

		}
	}

	arr_Ordenar(productos,QTY_PRODUCTO)
	{
		for(int i=0;i<EDADESSIZE;i++)
		{
			printf("Indice: %d valor: %d\n", i, productos[i]);
		}
	}


	return EXIT_SUCCESS;
}

int altaProducto(Producto* array,int limite,int indice){
	int retorno=-1;
	if(array!=NULL&&limite>0&&indice<limite)
	{
		if(fgets(array[indice].nombre,limite,stdin)==0)
		{
			if(fgets(array[indice].descripcion,limite,stdin)==0)
			{
				if(utn_getFloat("Precio:",&(array[indice].precio)==0)
				{

				}
			}
		}

		printf("\nIngrese la descripción del producto:\n");
		fgets(array[indice].descripcion,limite,stdin);
		printf("\nIngrese el precio del producto:\n");
		scanf("%f",array[indice].precio);

		retorno=0;
	}

	return retorno;
}

int prod_printProducto(Producto* arrayRecibido,int limite, int index)
{
	// VALIDAR!!

	printf("%s %s %f",arrayRecibido[index].nombre,
					  arrayRecibido[index].descripcion,
					  arrayRecibido[index].precio);

}




