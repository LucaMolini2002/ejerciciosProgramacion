/*
 * utn.h
 *
 *  Created on: 6 abr. 2021
 *      Author: Luk
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,
		     	 int minimo,int maximo,int reintentos);

char utn_getChar(char* pResultado,char* mensaje,char* mensajeError,
		     	 char minimo,char maximo,int reintentos);

float utn_getFloat(float* pResultado,char* mensaje,char* mensajeError,
		     	 float minimo,float maximo,int reintentos);

#endif /* UTN_H_ */
