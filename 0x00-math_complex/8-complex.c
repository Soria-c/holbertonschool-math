#include <math.h>
#include "holberton.h"

/**
 * complex_from_mod_arg - finds a complex number given its modulus and arg(z).
 * @m: modulus.
 * @arg: arg(z).
 * @c3: address to store the result.
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
