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
	int fd;
	ssize_t numRead, numWrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	numRead = read(fd, buffer, letters);
	if (numRead == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	
	numWrote = write(STDOUT_FILENO, buffer, numRead);
	if (numWrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (numWrote);
}
