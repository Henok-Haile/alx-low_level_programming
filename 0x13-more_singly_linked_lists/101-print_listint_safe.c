#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list
 *
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *temp;

	if (head == NULL)
		return (98);
	temp = head;

	while (temp != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}
	return (count);
}
