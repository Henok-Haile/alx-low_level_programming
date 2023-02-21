#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alphabet;

	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
		_putchar('\n');
	}
}
