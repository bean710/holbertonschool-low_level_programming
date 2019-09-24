#include "holberton.h"

/**
 * _isalpha - Checks if character is a letter
 * @c: ascii code of character to check
 *
 * Return: 1 if character is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
