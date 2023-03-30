#include "lists.h"

/**
 * list_len - A function that returns the number of
 * elementsin a linked leist_t list.
 *
 * @h: head pointer.
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h =  h->next;
	}
	return (count);
}
