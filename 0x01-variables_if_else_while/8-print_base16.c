#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	char b = 'a';

	while (a < 10)
	{
	putchar(48 + a);
	a++;
	}
	while (b <= 'f')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);
}
