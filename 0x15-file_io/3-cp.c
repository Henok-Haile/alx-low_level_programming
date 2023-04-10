#include "main.h"

/**
 * main - copy a file from one to another
 * @argc: number of arguments passed
 * @argv: array arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int fdWrite, fdRead, a, b, c;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fdRead = open(argv[1], O_RDONLY);
	if (fdRead < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdWrite = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(fdRead, buffer, BUFSIZ)) > 0)
	{
		if (fdWrite < 0 || write(fdWrite, buffer, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdRead);
			exit(99);
		}
	}

	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(fdRead);
	c = close(fdWrite);
	if (b < 0 || c < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdRead);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdWrite);
		exit(100);
	}
	return (0);
}
