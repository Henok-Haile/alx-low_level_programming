#include "main.h"
/**
 * _puts - A functionnthat prints a string with a new line
 * @str: a string
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
