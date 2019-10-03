#include "holberton.h"

/**
 * _strncpy - Copies source string to destination, but will
 *	      only copy up to N characters
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be copied from src string
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count]; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
