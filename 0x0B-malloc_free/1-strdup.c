#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: pointer to the first character in the source string
 *
 * Return: Pointer to the first character in the duplicate string
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *dest;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;
	len++;

	dest = malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
