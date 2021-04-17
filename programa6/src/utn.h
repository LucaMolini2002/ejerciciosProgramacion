/*
 * utn.h
 *
 *  Created on: 14 abr. 2021
 *      Author: Luk
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getChar(char* pLetra,char* pTexto,char* pError,int min,int max,char* reintento);
int sumar(int operadorA,int operadorB,int* resultado);
int restar(int operadorA,int operadorB,int* resultado);
int multiplicar(int operadorA,int operadorB,int* resultado);
int dividir(int operadorA,int operadorB,float* resultado);
int calcularFactorial(int operador,int* resultado);

#endif /* UTN_H_ */
