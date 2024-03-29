#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * @head: address of head
 * Return: the head node’s data (n) or 0 if linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	n = temp->n;
	temp->next = NULL;
	free(temp);
	return (n);
}
