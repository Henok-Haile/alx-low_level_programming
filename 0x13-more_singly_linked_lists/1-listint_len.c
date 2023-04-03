#include "lists.h"

/**
 * listint_len - returns the number of elements in a liked listint_t list
 *
 * @h: head pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
