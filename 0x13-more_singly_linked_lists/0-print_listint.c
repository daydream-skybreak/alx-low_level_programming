#include "lists.h"
/**
 * print_listint - prints elemnts in the linked list
 * @h: the head pointer in the linked list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int cnt = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	while (h)
	{
		printf("%d\n",h->n);
		cnt++;
		if (h->next == NULL)
			return (cnt);
		h = h->next;
	}
}
