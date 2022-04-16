#include "rectangle.h"
#include <math.h>

/**
 * rectangle_method - computes an integreal, rectangle method.
 * @a: lower bound.
 * @b: upper bound.
 * @steps: number of rectangles.
 * Return: integral.
 */
double rectangle_method(double a, double b, int steps)
{
	double width = (b - a) / steps;
	double area = 0;
	double x = 0;
	int i;

	for (i = 0; i < steps; i++, x += width)
		area += (1 / (1 + pow(x, 2))) * width;
	return (area);
}


