#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number or 0,
 * if there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 1, sum = 0;
	int bit;

	if (b == NULL)
	{
		return (0);
	}
	for (bit = 0; b[bit]; bit++)
	{
		if (b[bit] != '0' && b[bit] != '1')
		{
			return (0);
		}
	}
	bit--;
	while (bit >= 0)
	{
		if (b[bit] == '1')
		{
			sum += pow;
		}
		pow *= 2;
		bit--;
	}
	return (sum);
}
