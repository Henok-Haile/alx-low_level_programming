#include <stdio.h>
/**
 * main - prints all possible combination of single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
	putchar(48 + a);
	if (a != 9)
	{
	putchar(',');
	putchar(' ');
	}
	a++;
	}
	printf("\n");
	return (0);
}
