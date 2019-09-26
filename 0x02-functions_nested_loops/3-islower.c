#include "holberton.h"

/**
 * _islower - checks if character is lowercase
 * @c: integer ASCII value of character
 *
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
