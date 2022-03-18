#include <stdio.h>
#include "holberton.h"

/**
 * display_complex_number - prints a complex number
 * @c: complex number
 * Return: nothing.
 */
void display_complex_number(complex c)
{
	if (!c.re && c.im)
		printf("0 + %fi\n", c.im);
	else if (c.re && !c.im)
		printf("%f\n", c.re);
	else if (!c.re && !c.im)
		printf("0\n");
	else
		printf("%f + %fi\n", c.re, c.im);
}
