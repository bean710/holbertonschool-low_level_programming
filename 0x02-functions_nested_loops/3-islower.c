#include "holberton.h"

/**
 * _islower - checks if character is lowercase
 * @c: integer ASCII value of character
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
