#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little indian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *e = (char *) &i;

	return (*e);
}
