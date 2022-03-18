#include <math.h>
#include "holberton.h"

/**
 * pow2 - raises n to the power of 2.
 * @n: input number
 * Return: n to the second power.
 */
double pow2(double n)
{
	return (n * n);
}

/**
 * division - divides two complex numbers
 * @c1: input complex number.
 * @c2: input complex number.
 * @c3: address to store the result
 */

void division(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) + (c1.im * c2.im)) / (pow2(c2.re) + pow2(c2.im));
	c3->im = ((c1.im * c2.re) - (c1.re * c2.im)) / (pow2(c2.re) + pow2(c2.im));
}
