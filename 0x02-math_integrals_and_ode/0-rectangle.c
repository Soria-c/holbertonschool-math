#include "rectangle.h"
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
	double area = x = 0;
	int i;

	for (i = 0; i < steps; i++, x += width)
		area += height(x) * width;
	return (area);
}

/**
 * height - computes the value of the function at x.
 * @x: input
 * Return: height of the square
 */
double height(double x)
{
	return (1 / (1 + pow(x, 2)));
}
