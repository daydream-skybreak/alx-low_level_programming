#include "lists.h"
/**
 * free_dlistint - frees the memory held by a list
 * @head: list pointer
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
