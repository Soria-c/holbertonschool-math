#include "heron.h"
/**
 * heron - computes heron sequence with and error less or equal 10^-7.
 * @p: number to compute square root.
 * @x0: aproximation
 * Return: address of struct.
 */
t_cell *heron(double p, double x0)
{
	t_cell *new, *s, *t, *z;
	double limit = 0.0000001, error = 0;

	new = malloc(sizeof(t_cell));
	if (!new)
		return (NULL);
	new->elt = x0;
	error = p - (x0 * x0);
	if (error <= 0)
		error = -error;
	if (error <= limit)
	{
		new->next = NULL;
		return (new);
	}
	z = t = s = new->next = heron(p, (x0 + (p / x0)) / 2);
	for (; s; s = s->next->next)
	{
		new->next = s->next;
		s->next = new;
		if (s != t)
		{
			z->next = s;
			z = z->next;
		}
	}
	return (t);
}
