#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
    char opcion;
    char salir='n';
    char a = '~';
    char b = '~';

    float division;

    int x ;
    int y ;
    int suma;
    int resta;
    int multiplicacion;
    int factorialA;
    int factorialB;
    int flag1 = 0;
    int flag2 = 0;
    int flag3 = 0;

    do
    {
        system("cls");

        printf("\n     ----Menu de opciones----\n\n");
        if(flag1 == 0)
        {
            printf(" 1- Ingrese el primer operando (A = %c)\n", a);  // lo que se muestra antes de cargar los valores
        }
        else
        {
            printf(" 1- Ingrese el primer operando (A = %d)\n", x);  // una vez cargados los valores se muestran en el menu
        }

        if(flag2 == 0)
        {
            printf(" 2- Ingrese el segundo operando (B = %c)\n", b);
        }
        else
        {
            printf(" 2- Ingrese el segundo operando (B = %d)\n", y);
        }
        printf(" 3- Calcular todas las operaciones\n");
        printf(" 4- Informar resultados\n");
        printf(" 5- Salir\n\n");
        printf(" Indique opcion: ");
        fflush(stdin);
        opcion = getchar();

        switch(opcion)
        {
        case '1':
            printf("\n Ingrese el primer operando: ");
            scanf("%d", &x);
            printf("\n");
            flag1 = 1;
            system("pause");
            break;

        case '2':
            printf("\n Ingrese el segundo operando: ");
            scanf("%d", &y);
            printf("\n");
            flag2 = 1;
            system("pause");
            break;

        case '3':
            flag3 = flag1 + flag2;  // entra a realizar las operaciones solo cuando hay dos operandos

            if(flag3 != 2)
            {
                printf("\n Para realizar las operaciones primero hay que ingresar los dos operandos\n\n");

            }
            else   // llamado a las funciones
            {
                suma = getSuma(x, y);
                resta = getResta(x, y);
                division = getDivision(x, y);
                multiplicacion = getMultiplicacion(x, y);

                if(x > 0)   // para que no se cuelgue el programa por unos segundos
                {
                    factorialA = getFactorial(x);
                }

                if(y > 0)
                {
                    factorialB = getFactorial(y);
                }

                printf("\n Se realizaron las operaciones\n\n");
            }

            system("pause");
            break;

        case '4':
            if(flag3 != 2)
            {
                printf("\n Para informar los resultados primero hay que hacer las operaciones. Si ya se realizaron se deben hacer nuevamente\n\n");
            }
            else    // muestra unicamente los resultados luego de haber realizado las operaciones
            {
                printf("\n a) El resultado de A+B es: %d\n", suma);
                printf(" b) El resultado de A-B es: %d\n", resta);

                if(y == 0)
                {
                    printf(" c) No es posible dividir por cero\n");
                }
                else
                {
                    printf(" c) El resultado de A/B es: %.2f\n", division);
                }

                printf(" d) El resultado de A*B es: %d\n", multiplicacion);

                if(x <= 0 && y > 0)   // direfentes casos de factorial
                {
                    printf(" e) No se puede realizar el factorial de A y el factorial de B es: %d\n\n", factorialB);
                }
                else if(x > 0 && y <= 0)
                {
                    printf(" e) El factorial de A es: %d y no se puede realizar el factorial de B\n\n", factorialA);
                }
                else if(x <=0 && y <= 0)
                {
                    printf(" e) No se pueden realizar el factorial de A ni de B\n\n");
                }
                else
                {
                    printf(" e) El factorial de A es: %d y el factorial de B es: %d\n\n", factorialA, factorialB);
                }
            }

            flag3 = flag1 + flag2 + 3;  // se pone 3 para evitar que muestre las operaciones si no se debe
            system("pause");
            break;

        case '5':
            printf("\n Desea salir?(s/n): ");
            fflush(stdin);
            salir = getchar();
            while(salir != 's' && salir != 'n')
            {
                printf("\n Error. Ingrese s/n: ");
                fflush(stdin);
                salir = getchar();
            }
            break;

        default:
            printf("\n Opcion invalida\n\n");
            system("pause");
        }
    }
    while(salir=='n');

    return 0;
}


