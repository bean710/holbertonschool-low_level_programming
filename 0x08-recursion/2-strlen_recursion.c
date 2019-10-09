#include "holberton.h"

/**
 * _strlen_recursion - gets the length of a string using recursion
 * @s: pointer to character in string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
