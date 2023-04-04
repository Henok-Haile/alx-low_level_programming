#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given postion
 *
 * @head: address of head pointer
 * @idx: index
 * @n: value
 * Return: new node or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newNode;
	unsigned int count = 0;

	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (idx > count)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	temp = *head;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (newNode);
}
