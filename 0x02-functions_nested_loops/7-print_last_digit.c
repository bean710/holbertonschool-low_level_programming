#include "holberton.h"

/**
 * print_last_digit - prints last character of a number
 * @n: Input number
 *
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + n % 10);
		return (n % 10);
	}
	else
	{
		_putchar('0' + -n % 10);
		return (-(n % 10));
	}
}
