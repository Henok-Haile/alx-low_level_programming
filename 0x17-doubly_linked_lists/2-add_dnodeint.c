#include "lists.h"

/**
 * add_dnodeint - adds a new node at the begining of list
 * @head: pointer to head pointer
 * @n: integer data
 *
 * Return: address of new element, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
