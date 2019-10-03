#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @a: Pointer to string to be changed
 *
 * Return: Pointer to beginning of string
 */
char *string_toupper(char *a)
{
	char *p = a;
	int diff = ('a' - 'A');

	for (; *p; p++)
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= diff;
	}

	return (a);
}
