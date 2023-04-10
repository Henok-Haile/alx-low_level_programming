#include "main.h"

/**
 * read_textfile - reads s text file and prints to the POSIX standard output
 *
 * @letters: number of letters it should read and print
 * @filename: address of file
 * Return: the actual number of letters it could read and print
 * if file name is NULL return 0
 * if write fails or does not write the expected
 * amount of bytes, return 0
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	int i, n;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);

	if (fp < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	i = read(fp, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[i] = '\0';
	close(fp);
	n = write(STDOUT_FILENO, buffer, i);
	if (n < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (n);
}
