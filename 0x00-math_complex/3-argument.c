#include "holberton.h"
#include <math.h>

/**
 * argument - caculates the argument of a complex number.
 * @c: input complex number.
 * Return: arg(z) of c.
 */

double argument(complex c)
{
	return (atan2(c.im, c.re));
}
