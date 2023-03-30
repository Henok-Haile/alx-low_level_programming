#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * if str is NULL, print [0] (nil)
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("(nil)");
	}

	while (h != NULL)
	{
		count++;
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
