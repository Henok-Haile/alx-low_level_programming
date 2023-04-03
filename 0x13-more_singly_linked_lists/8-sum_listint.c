#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a listint_t linked list
 *
 * @head: head pointer
 * Return: summ of all the data(n) of a list, 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
