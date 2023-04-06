#include "main.h"

/**
 * flip_bits - return number of bits that would be needed to be flipped
 *
 * @n: integer number
 * @m: integer number
 * Return: no of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;

	while (x > 0)
	{
		count++;
		x &= (x - 1);
	}

	return (count);
}
