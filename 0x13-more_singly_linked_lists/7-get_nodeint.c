#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: head pointer
 * @index: index of the node, starting at 0
 * Return: node, if it doesn't exist NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if ((index + 1) > count)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
