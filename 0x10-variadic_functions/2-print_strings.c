#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings, followed by a new line
 * @separator: string separator
 * @n: number of strings
 * where separator is the string to be printed between the strings
 * and n is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *s;

	va_start(strings, n);
	for (i = 1; i <= n; i++)
	{
		s =  va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";

		printf("%s", s);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
