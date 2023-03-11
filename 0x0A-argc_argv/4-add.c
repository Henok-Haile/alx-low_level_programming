#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * @argc: argument counter
 * @argv: an array of poiters to string
 * Return: Always 0 if the arguments are numbers.
 * else return 1.
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
