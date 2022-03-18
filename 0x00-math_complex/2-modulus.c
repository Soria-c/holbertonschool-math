#include "holberton.h"
#include <math.h>

/**
 * modulus - takes the modulus of a complex number.
 * @c: input complex number.
 * Return: modulus of c.
 */

double modulus(complex c)
{
	return (sqrt((c.re * c.re) + (c.im * c.im)));
}
