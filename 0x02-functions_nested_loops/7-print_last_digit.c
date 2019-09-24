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

	i %= 10;
	i = (n > 0) ? n : -n;

	_putchar('0' + i);
	return (i);
}
