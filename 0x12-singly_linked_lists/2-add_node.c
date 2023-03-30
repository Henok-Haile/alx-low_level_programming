#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning of a list_t list.
 *
 * @head: head pointer
 * @str: string to be add as a node
 * str needs to be duplicated
 * strdup is allowed
 * Return: the address of the new element or null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

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
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
