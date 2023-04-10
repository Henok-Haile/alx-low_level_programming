#include "main.h"

/**
 * main - copy a file from one to another
 * @argc: number of arguments passed
 * @argv: array arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int fdW, fdR, a, b, c;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdR = open(argv[1], O_RDONLY);
	if (fdR < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdW = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(fdR, buffer, BUFSIZ)) > 0)
	{
		if (fdW < 0 || write(fdW, buffer, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdR);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(fdR);
	c = close(fdW);
	if (b < 0 || c < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdR);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdW);
		exit(100);
	}
	return (0);
}
