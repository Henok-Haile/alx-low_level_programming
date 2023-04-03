#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: address of head pointer
 * @n: integer
 * Return: the address of new elmement or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp = NULL;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			*head = newNode;
		}
		else
		{
			temp =  *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}
	return (*head);
}
