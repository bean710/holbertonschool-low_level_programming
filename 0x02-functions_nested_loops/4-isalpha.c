#include "holberton.h"

/**
 * _isalpha - Checks if character is a letter
 *
 * Return: 1 if character is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

	return (0);
}
