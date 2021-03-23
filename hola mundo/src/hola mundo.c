

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numeroA;
	int numeroB;
	int sumaAyB;
	printf("ingrese un numero\n");
	scanf("%d",&numeroA);
	printf("Ingrese otro numero\n");
	scanf("%d",&numeroB);
	sumaAyB=numeroA+numeroB;
	printf("La suma es %d",sumaAyB);

	return EXIT_SUCCESS;
}
