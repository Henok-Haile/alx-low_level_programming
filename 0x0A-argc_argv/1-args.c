#include <stdio.h>

/**
 * main - entry point.
 *
 * @argc: argument counter
 * @argv: pointer to strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
