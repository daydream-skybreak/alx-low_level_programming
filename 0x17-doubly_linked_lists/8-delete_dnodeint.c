#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: the beginning of the list
 * @index: the index of the node about to be deleted
 * Return: 1 if successful and -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}

	for (; index != 0; index--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}

	if (tmp->next == NULL)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}

	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
