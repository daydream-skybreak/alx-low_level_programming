#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t
 * @h: a pointer to the structure
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int num_node;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;

		num_node++;
	}

	return (num_node);
}
