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
	char *p = dest;
	int count;

	for (count = 0; count < n; src++, count++, p++)
	{
		*p = *src;
		if (*src == '\0')
			break;
	}

	return (dest);
}
