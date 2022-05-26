#include "lists.h"
/**
 * add_nodeint - add a new node to a list
(* a blank line
*@head: the head of list
*@n: the integer to put in the new node
* Description: add a new node to a list)?
(* section header: the header of this function is lists.h)*
* Return: the head of the list.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head)
		new->next = *head;

	*head = new;
	
	return (new);
}
