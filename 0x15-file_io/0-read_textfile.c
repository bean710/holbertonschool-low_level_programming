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
	ssize_t status, ret;
	int fd;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}

	ret = read(fd, buffer, letters);
	if (ret < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	status = write(STDOUT_FILENO, buffer, ret);
	if (status < 0 || status != ret)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (ret);
}
