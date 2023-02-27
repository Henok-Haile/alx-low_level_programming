#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: a string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
		j++;
	}
}
