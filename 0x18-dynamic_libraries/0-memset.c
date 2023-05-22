#include "main.h"
/**
 * _memset - fills memory a constant byte
 * @s: a pointer
 * @b: constan byte to be filled
 * @n: n bytes
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
