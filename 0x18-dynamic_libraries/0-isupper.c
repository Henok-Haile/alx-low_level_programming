#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for the uppercase character.
 * @c: character to be checked.
 * Return: 1 if an uppercase and 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
