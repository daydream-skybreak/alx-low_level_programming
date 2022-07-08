#include "lists.h"
/**
 * sum_dlistint - sums all data in a linked list
 * @head: beginning of the list
 * Return: sum of the linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
