#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible differnet combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i < j && i < k && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i < 55) || (j < 56) || (k < 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
