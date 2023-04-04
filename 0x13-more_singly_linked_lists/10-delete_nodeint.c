#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * linked list
 * @index: index of node to be deleted
 * @head: address of head pointer
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;

	/*if (*head == NULL)
		return (-1);*/

	curr = *head;
	prev = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
		curr = NULL;
		return (1);
	}

	while (index != 0)
	{
		prev = curr;
		curr = curr->next;
		index--;
	}
	prev->next = curr->next;
	free(curr);
	curr = NULL;

	return (1);
}
