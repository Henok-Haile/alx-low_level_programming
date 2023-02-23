# include "main.h"

/**
 * more_numbers - A function that prints 10 times the numbers
 *
 * Return: void
 */

void more_numbers(void)
{
int i;
int j;
i = 0;

while (i < 10)
{
j = 0;

while (j < 15)
{
if (j >= 10)
{
_putchar((j / 10) + 48);
}
{
_putchar((j % 10) + 48);
j++;
}
}
_putchar('\n');
i++;
}
}
