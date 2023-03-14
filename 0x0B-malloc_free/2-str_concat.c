#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 *
 * The returned pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrStr;
	int i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptrStr = malloc(sizeof(char) * (i + j + 1));

	if (ptrStr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptrStr[k] = s1[k];

	k = 0;
	for (k = 0; k <= j; k++)
		ptrStr[i + k] = s2[k];

	ptrStr[i + j + 1] = '\0';

	return (ptrStr);
}
