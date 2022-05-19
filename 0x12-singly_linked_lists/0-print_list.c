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

	while (n)
	{
		printf("[%u] ",n->len);
		if (n == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", n->str);

		n = n->next;
		num_node++;
	}
	return (num_node);
}
