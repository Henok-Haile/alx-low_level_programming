#include "main.h"

/**
 * print_binary - prints the binary representattion of a number
 *
 * @n: unsigned integer
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shifts;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;
	shifts = 0;
	while ((temp >>= 1) > 0)
	{
		shifts++;
	}
	while (shifts >= 0)
	{
		if ((n >> shifts) & 1)
			_putchar('1');
		else
			_putchar('0');
		shifts--;
	}
}
