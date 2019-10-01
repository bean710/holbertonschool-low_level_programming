#include "holberton.h"

/**
 * print_rev - Prints a string backwards
 * @s: pointer to the first character in the string
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;

	for (; *s; s++)
		len++;

	s--;

	for (i = 0; i < len; i++)
		_putchar(*(s--));

	_putchar('\n');
}
