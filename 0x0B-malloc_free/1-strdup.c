#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to newly allocated space
 *           in memory, which conatins a copy of the string given as a
 *           parameter
 * @str: string to be copied
 * Return: returns NULL if str = NULL
 *         returns a pointer to the duplicated string on success
 *         reurns NUll if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i;
	char *p;
	int j;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	p = malloc((j + 1) * sizeof(*str));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];

	return (p);
}
