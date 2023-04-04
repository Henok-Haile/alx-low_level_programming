#include "lists.h"

/**
 * reverse_listint - reverses a listint linked list
 *
 * @head: adress of head pointer
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *P = NULL;
	listint_t *N = NULL;

	while (*head != NULL)
	{
		N = (*head)->next;
		(*head)->next = P;
		P = *head;
		*head = N;
	}
	*head = P;

	return (*head);
}
