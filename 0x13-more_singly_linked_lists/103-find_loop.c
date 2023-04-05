#include "lists.h"

/**
 * find_listint_loop -  finds a loop in a linked list
 *
 * @head: head pointer
 * Return: the address of the node where the loop starts
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Ntrav = head;
	listint_t *Dtrav = head;

	while (Ntrav && Dtrav && Dtrav->next)
	{
		Ntrav = Ntrav->next;
		Dtrav = Dtrav->next->next;
		if (Ntrav == Dtrav)
		{
			return (Dtrav);
		}
	}
	return (NULL);
}
