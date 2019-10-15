#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatonates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: Pointer to new string containing s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	unsigned int i, j;
	char *dest;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;

	for (len2 = 0; s2[len2]; len2++)
		;

	dest = malloc(sizeof(char) * (len1 + len2 + 1));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		dest[i] = s1[i];

	for (j = 0; j < len2; j++)
		dest[j + i] = s2[j];

	dest[j + i] = '\0';

	return (dest);
}
