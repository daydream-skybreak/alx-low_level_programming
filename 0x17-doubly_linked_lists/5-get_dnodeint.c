#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at given index
 * @head: starting pointer of the list
 * @index: needed node
 * Return: the node at index 'index'
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node = head;

	while (node)
	{
		if (n == index)
			return (node);
		node = node->next;
		n++;
	}
	return (NULL);
}
