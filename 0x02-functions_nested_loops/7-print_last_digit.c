#include "holberton.h"

/**
 * print_last_digit - prints last character of a number
 * @n: Input number
 *
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int i, j;

	i = n % 10;
	j = (i > 0) ? i : -i;

	_putchar('0' + j);
	return (j);
}
