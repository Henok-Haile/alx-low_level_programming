#include "main.h"

/**
 * print_line - A function that draws line in terminal
 * @n: number of times the character to be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar(95);
	}
	_putchar('\n');
}
