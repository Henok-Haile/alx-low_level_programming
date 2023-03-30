#include "lists.h"

/**
 * free_list - A function that frees a list+t list.
 *
 * @head: head pointer.
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		head = head->next;
		free(temp);
	}
}
