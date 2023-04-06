#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: address of integer
 * @index: given index
 * Return: 1 if it succesful,
 *        -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changerbit = 1;

	changerbit <<= index;
	if (index > 64)
	{
		return (-1);
	}

	(*n) = (*n) & (~changerbit);

	return (1);
}
