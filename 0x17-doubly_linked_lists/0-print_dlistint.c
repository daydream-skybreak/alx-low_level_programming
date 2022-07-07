#include "lists.h"
/*
 * print_dlistint - prints the values of the list provided
 * @h: the input list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
