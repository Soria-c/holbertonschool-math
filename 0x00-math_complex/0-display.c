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
			printf("%.9gi\n", c.im);
		else
			printf("%.9g - %.9gi\n", c.re, -(c.im));
	}
	else if (!c.im)
		printf("%.9g\n", c.re);
	else if (!c.re)
		printf("%.9gi\n", c.im);
	else
		printf("%.9g + %.9gi\n", c.re, c.im);
}
