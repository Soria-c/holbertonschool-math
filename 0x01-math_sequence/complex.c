#include "holberton.h"
#include <math.h>

/**
 *modulus - takes the modulus of a complex number.
 * @c: input complex number.
 * Return: modulus of c.
 */

double modulus(complex c)
{
	return (sqrt((c.re * c.re) + (c.im * c.im)));
}
/**
 * addition - adds two complex numbers
 * @c1: input complex number.
 * @c2: input complex number.
 * @c3: address to store the result
 */

void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
/**
 * multiplication - multiplies two complex numbers
 * @c1: input complex number.
 * @c2: input complex number.
 * @c3: address to store the result
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + (-(c1.im * c2.im));
	c3->im = (c2.im * c1.re) + (c1.im * c2.re);
}

