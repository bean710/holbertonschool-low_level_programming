#include "holberton.h"

/**
 * print_last_digit - prints last character of a number
 * @n: Input number
 *
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n;
	i %= 10;
	i = (i > 0) ? i : -i;

	_putchar('0' + i);
	return (i);
}
