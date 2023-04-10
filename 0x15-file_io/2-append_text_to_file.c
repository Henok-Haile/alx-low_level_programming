#include "main.h"

/**
 * _strlen - finds the length of the string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * int append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string to be add
 * Return: 1 on sucess, -1 on failure
 * Do not create the file if it does not exist
 * if filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or
 * if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numWrote;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	numWrote = write(fd, text_content, _strlen(text_content));
	if (numWrote == -1 || numWrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
