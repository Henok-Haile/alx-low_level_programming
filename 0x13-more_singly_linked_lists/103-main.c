#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	node = find_listint_loop(head2);
	if (node != NULL)
	{
		printf("loop starts at [%p] %d\n", (void *)node, node->n);
	}
	free_listint_safe(&head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&heade, 1);
	add_nodeint(&heade, 2);
	add_nodeint(&heade, 3);
	add_nodeint(&heade, 4);
	add_nodeint(&heade, 5);
	add_nodeint(&heade, 6);
	node->next = add_nodeint(&heade, 7);
	add_nodeint(&heade, 98);
	add_nodeint(&heade, 402);
	add_nodeint(&heade, 1024);
	print_listint_safe(head);
	node = find_listint_loop(head);
	if (node != NULL)
	{
		printf("Loop starts at [%p] %d\n", (void *)node, node->);
	}
	free_listint_safe(&head);
	return (0);
}
