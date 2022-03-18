#include "holberton.h"

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
