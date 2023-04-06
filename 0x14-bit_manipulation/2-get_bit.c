#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: long integer
 * @index: given index
 * Return: bit at a given index
 * -1 if error ouccured
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
