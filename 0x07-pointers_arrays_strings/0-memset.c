#include "holberton.h"

/**
 * _memset - Fills n bytes of memory with char c
 * @s: pointer to first byte of memory to be filled
 * @b: character to fill memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to first character of filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
