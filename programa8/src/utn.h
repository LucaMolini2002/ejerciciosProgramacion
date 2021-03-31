/*
 * utn.h
 *
 *  Created on: 25 mar. 2021
 *      Author: Luk
 */

#ifndef UTN_H_
#define UTN_H_
/*
 getNumero: le pide al usuario un numero con reintentos

 pnum : puntero variable donde deja escrito el numero ingresado

 perror: mensaje de error

 max:
 min:
 reintento:
 return: =1 en caso de error y 0 si no hubo error
 */
int utn_getInt(int* pResultado,char* mensaje,char* mensajeError,
		     	 int minimo,int maximo,int reintentos);
#endif /* UTN_H_ */
