#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - searches string for a character
 * @s: pointer to beginning of string to be searched
 * @c: character to be searched for
 *
 * Return: pointer to character if found, otherwise returns NULL
 */
char *_strchr(char *s, char c)
{
	for (; *s && *s != c; s++)
		;

	return (*s == c ? s : NULL);
}
