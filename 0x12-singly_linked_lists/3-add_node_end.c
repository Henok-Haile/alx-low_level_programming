#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the
 * end of a list_t list.
 *
 * @head: head pointer
 * @str: string to be add as a node
 * str needs to be duplicated
 * strdup is allowed
 * Return: the address of the new element or null if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *ptr;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = newNode;
	}
	return (newNode);
}
