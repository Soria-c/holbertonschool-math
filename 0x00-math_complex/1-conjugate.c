#include "holberton.h"

/**
 * conjugate - takes the conjugate of c
 * @c: input complex number.
 * Return: conjugate of c.
 */

complex conjugate(complex c)
{
	c.im = -(c.im);
	return (c);
}
