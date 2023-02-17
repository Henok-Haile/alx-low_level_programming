#include <stdio.h>
/**
 * main - prints reverse lowercase alphabets
 *
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
	putchar(a);
	a--;
	}
	putchar('\n');
	return (0);
}
