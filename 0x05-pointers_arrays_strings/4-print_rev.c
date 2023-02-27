#include "main.h"
/**
 * print_rev - A function that prints a string, in revers
 * with a new line
 * @s: a string
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
		while (count >= 0)
		{
			_putchar(s[count]);
			count--;
		}
	_putchar('\n');
}
