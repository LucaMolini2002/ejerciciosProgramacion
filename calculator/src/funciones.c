#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Calcula la suma entre dos numeros
 *
 * \param x Es un numero
 * \param y Es un numero que se le suma a x
 *
 * \return Devuelve el resultado de la suma entre ambos numeros
 */
int getSuma(int x, int y)
{
    int suma;

    suma = x + y;

    return suma;
}

/** \brief Calcula la resta entre dos numeros
 *
 * \param x Es un numero
 * \param y Es un numero que se le resta a x
 *
 * \return Devuelve el resultado de la resta entre ambos numeros
 */
int getResta(int x, int y)
{
    int resta;

    resta = x - y;

    return resta;
}

/** \brief Calcula la division entre dos numeros
 *
 * \param x Es el dividendo
 * \param y Es el divisor
 *
 * \return Devuelve el resultado de la division entre ambos numeros
 */
float getDivision(int x, int y)
{
    float division;

    division = (float) x / y; // cast de int a float para que mueste el resultado en float

    return division;
}

/** \brief Calcula la multiplicacion entre dos numeros
 *
 * \param x es un numero
 * \param y es un numero que se multiplica por x
 *
 * \return Devuelve el resultado de la multiplicacion entre ambos numeros
 */
int getMultiplicacion(int x, int y)
{
    int multiplicacion;

    multiplicacion = x * y;

    return multiplicacion;
}

/** \brief Calcula el factorial de un numero
 *
 * \param x Es el numero al que se le realiza el factorial
 *
 * \return Devuelve el resultado del factorial del numero
 */
int getFactorial(int x)
{
    int factorial;

    if(x == 1)
    {
        factorial = 1;
    }
    else
    {
        factorial = x * getFactorial(x-1);
    }

    return factorial;
}
