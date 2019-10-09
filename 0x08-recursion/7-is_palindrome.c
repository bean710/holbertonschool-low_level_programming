#include "holberton.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to first character of string to be checked
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (_check_palindrome(s, _getlen(s, 0)));
}

/**
 * _check_palindrome - Checks if a string is a palindrime recursively
 * @c: First character to compare
 * @i: Difference between position of first character and second character to
 *		compare
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _check_palindrome(char *c, int i)
{
	if (i <= 0)
		return (1);

	if (*c != *(c + i - 1))
		return (0);

	return (_check_palindrome(c + 1, i - 2));
}

/**
 * _getlen - gets the length of a string recursively
 * @c: Pointer to first character in string
 * @i: Number to start counting at
 *
 * Return: Length of string
 */
int _getlen(char *c, int i)
{
	if (*c == '\0')
		return (i);

	return (_getlen(c + 1, i + 1));
}
