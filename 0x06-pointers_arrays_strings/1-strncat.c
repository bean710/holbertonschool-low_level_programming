#include "holberton.h"

/**
 * _strncat - Concatonates two strings at the position of the first, but will
 *	      only copy up to N characters of the second string
 * @dest: Pointer to the first sring and destination string
 * @src: Pointer to the second string
 * @n: Maximum number of bytes to be copied from src string
 *
 * Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int count;

	for (; *p; p++)
		;

	for (count = 0; *src && count < n; src++, count++, p++)
		*p = *src;
	*p = '\0';

	return (dest);
}
