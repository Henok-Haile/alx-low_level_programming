#include "main.h"
#include <stdlib.h>

/*
 * create_array - A fucntion that creates an array of chars,
 * and initailizes it with a specific char.
 *
 * @size: size of an array
 * @c: specific char
 * Return: pointer to chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	while (i < size)
	{
		cr[i] = c;
		i++;
	}

	return (cr);
}
