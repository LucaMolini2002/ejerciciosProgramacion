/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: Luca
 */
#include <stdio.h>
#include <stdlib.h>



int utn_getInt(int* pNumA,char* pTexto,char* pError,char* reintento,int min,int max){
	int retorno=-1;
	do{
		printf("%s",pTexto);
		fflush(stdin);
		if(scanf("%d",pNumA)==1){
			if (*pNumA>=min && *pNumA<=max)
			{
				retorno= 0;
				break;
			}else{
				printf("%s",pError);
				reintento--;
			}
		}else{
			printf("%s",pError);
			reintento--;
		}
	}
	while(reintento>0);

	return retorno;
}
