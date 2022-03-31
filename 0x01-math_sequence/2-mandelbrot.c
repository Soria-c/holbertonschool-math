#include <stdio.h>
#include "holberton.h"
/**
 * mandelbrot - computes the mandelbrot set
 * @re: real part
 * @im: lateral part
 * Return: 1 is coordinate is inside of the set, 0 otherwise.
 */
int mandelbrot(int re, int im)
{
	complex c, z, r;
	int i;

	z.re = 0;
	z.im = 0;
	c.re = (re - 500) * 0.004;
	c.im = (im - 500) * 0.004;
	for (i = 0; i < 255; i++)
	{
		if (modulus(z) > 2)
			return (0);
		multiplication(z, z, &r);
		addition(r, c, &z);
	}
	return (1);
}
/**
 * main - creates the pgm file
 */
void main(void)
{
	int i, j;
	int w = 1000, h = 1000;
	FILE *pgmimg;

	pgmimg = fopen("mandelbrot.pgm", "wb");
	fprintf(pgmimg, "P2\n");
	fprintf(pgmimg, "%d %d\n", w, h);
	fprintf(pgmimg, "1\n");
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
			fprintf(pgmimg, "%d ", mandelbrot(j, i));
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
}
