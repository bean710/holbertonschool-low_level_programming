#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int i, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

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
	int i = 0;

	for (; *s != '\0'; s++)
		i++;

	return (i);
}
