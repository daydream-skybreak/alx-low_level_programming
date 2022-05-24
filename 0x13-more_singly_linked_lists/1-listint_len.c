#include "lists.h"
/*
 * listlen_int - gives the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt;
	cnt = 0;
	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
