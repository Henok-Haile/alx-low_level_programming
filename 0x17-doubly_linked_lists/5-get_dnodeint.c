#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node a index in the list
 * @head: head pointer
 * @index: node index
 *
 * Return: address of the node, else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}

	return (head);
}
