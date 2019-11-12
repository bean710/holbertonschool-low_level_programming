#include "holberton.h"

/**
 * read_textfile - Reads and prints a certain number of characters from a
 * certain file
 * @filename: The name of the file to open and read
 * @letters: The number of bytes to read and print from the file
 *
 * Return: Returns the number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t desc, status, ret;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL || filename == NULL)
		return (0);

	desc = open(filename, O_RDONLY);
	if (desc < 0)
	{
		free(buffer);
		return (0);
	}

	ret = read(desc, buffer, letters);
	if (ret < 0)
	{
		close(desc);
		free(buffer);
		return (0);
	}
	buffer[ret] = '\0';

	status = write(1, buffer, ret);
	if (status < 0 || status != ret)
	{
		close(desc);
		free(buffer);
		return (0);
	}

	if (close(desc))
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (ret);
}
