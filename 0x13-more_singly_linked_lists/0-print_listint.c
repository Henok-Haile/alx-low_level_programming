#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;
	temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
