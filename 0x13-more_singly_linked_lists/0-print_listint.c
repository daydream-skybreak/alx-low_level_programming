#include "lists.h"
/**
 * print_listint - prints elemnts in the linked list
 * @h: the head pointer in the linked list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt;

	cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;

		h = h->next;
	}

	return (cnt);
}
