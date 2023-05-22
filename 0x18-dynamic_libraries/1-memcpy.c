#include "main.h"
/**
 * _memcpy - copies memeory area from source to dest
 * @dest: destination to
 * @src: source
 * @n: n bytes
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
