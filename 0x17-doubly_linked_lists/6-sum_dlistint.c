#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t linked list
 * @head: head pointer
 *
 * Return: 0 if the list is empty, else sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
