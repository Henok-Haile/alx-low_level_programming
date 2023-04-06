#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: address of integer
 * @index: given index
 * Return: 1 if it worked,
 *        -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int indToSet = 1;

	indToSet <<= index;
	if (index > 64)
	{
		return (-1);
	}

	(*n) = (*n) | indToSet;
	return (1);
}
