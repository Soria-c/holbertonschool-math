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
	int elt;
	struct cell *next;
} t_cell;
double gold_number(t_cell *head);
t_cell *Fibonnaci();

#endif /*HERON_H*/
