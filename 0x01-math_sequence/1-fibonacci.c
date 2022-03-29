#include "fibonacci.h"

/**
 * Fibonnaci - computes fibonacci sequence.
 * Return: pointer to linked list
 */
t_cell *Fibonnaci()
{
	int temp, a = 1, sum = 0;
	t_cell *new, *tmp = NULL;

	for (; sum != 6765; tmp = new, a = temp)
	{
		new = malloc(sizeof(t_cell));
		temp = sum;
		sum += a;
		new->elt = sum;
		new->next = tmp;
	}
	return (new);
}
/**
 * gold_number - computes golden ratio
 * @head: address of linked list
 * Return: golden ratio
 */
double gold_number(t_cell *head)
{
	return ((head->elt) / (double)(head->next->elt));
}
