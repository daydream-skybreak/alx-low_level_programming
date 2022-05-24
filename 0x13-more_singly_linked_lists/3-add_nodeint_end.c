#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: the beginning of the list
 * @n: value for the end of the list
 * Return: pointer to the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *tail;

	if (head == NULL)
	{
		return (NULL);
	}

	tail = malloc(sizeof(list_t));

	if (tail == NULL)
	{
		return (NULL);
	}

	tail->n = n;
	tail->next = NULL;

	if (*head == NULL)
	{
		*head = tail;
	}
	else
	{
		actual = *head;
		while (actual->next)
		{
			actual = actual->next
		}
		actual->next = tail;
	}

	return (tail);
}
