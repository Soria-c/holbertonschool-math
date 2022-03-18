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
			if (-(c.im) == 1)
				printf("-i\n");
			else
				printf("%gi\n", c.im);
		else
			if (-(c.im) == 1)
				printf("%g - i\n", c.re);
			else
				printf("%g - %gi\n", c.re, -(c.im));
	}
	else if (!c.im)
		printf("%g\n", c.re);
	else if (!c.re)
	{
		if (c.im == 1)
			printf("i\n");
		else
			printf("%gi\n", c.im);
	}
	else
	{
		if (c.im == 1)	
			printf("%g + i\n", c.re);
		else
			printf("%g + %gi\n", c.re, c.im);
	}
}
