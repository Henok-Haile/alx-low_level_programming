#include "main.h"

/**
 * _isdigit - checks is the argument is a number between 0-9
 * @c: input
 * Return: 1 if it is between number 0-9, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
