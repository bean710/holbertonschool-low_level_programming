#include "holberton.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *cat = malloc(sizeof(char) * (len1 + len2 + 1));
	unsigned int i, count = 0;

	if (cat == NULL)
		return (NULL);

	for (; *s1; s1++, count++)
		cat[count] = *s1;

	for (i = 0; *s2 && i < n; i++, s2++, count++)
		cat[count] = *s2;

	cat[count] = '\0';

	return (cat);	
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to first character of string
 *
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
		i++;

	return (i);
}
