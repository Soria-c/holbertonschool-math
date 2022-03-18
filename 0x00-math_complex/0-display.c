#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - prints a complex number
 * @c: complex number
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	if (c.im < 0)
	{
		if (!c.re)
			printf("%.fi\n", c.im);
		else
			printf("%.f - %.fi\n", c.re, -c.im);
	}
	else if (!c.im)
		printf("%.f\n", c.re);
	else if (!c.re)
		printf("%.f\n", c.im);
	else
		printf("%.f + %.fi\n", c.re, c.im);
}
