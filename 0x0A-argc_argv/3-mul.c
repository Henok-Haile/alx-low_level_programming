#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * @argc: argument counter
 * @argv: pointer to string
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(*(argv + 1)) * atoi(*(argv + 2)));
		return (1);
	}
	else
		printf("Error\n");
	return (0);
}
