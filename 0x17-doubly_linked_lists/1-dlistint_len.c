#include "lists.h"

/**
 * dlistint_len - prints number elements of the list
 * @h: head pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		/* printf("%d\n", ptr->n); */
		ptr = ptr->next;
	}

	return (count);
}
