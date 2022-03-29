#ifndef HERON_H
#define HERON_H

#include <stdlib.h>
/**
 * struct cell - linked list to save sequences
 * @elt: number.
 * @next: next cell
 */
typedef struct cell
{
	double elt;
	struct cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif /*HERON_H*/
