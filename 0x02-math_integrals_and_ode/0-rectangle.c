#include "rectangle.h"

double rectangle_method(double a, double b, int steps )
{
    double width = (b - a) / steps;
    double area = 0;
    double x = 0;
    int i;

    for (i = 0; i < steps; i++, x += width)
        area += height(x) * width;
    return (area);
}


double height(double x)
{
    return (1 / (1 + pow(x, 2)));
}
