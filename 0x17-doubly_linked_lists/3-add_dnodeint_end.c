#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to head pointer
 * @n: integer data
 *
 * Return: adress of new element, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tp = *head;
	while (tp->next != NULL)
		tp = tp->next;
	tp->next = new;
	new->prev = tp;

	return (new);
}

