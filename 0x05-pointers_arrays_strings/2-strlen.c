#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to first character of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
		i++;

	return (i);
}

