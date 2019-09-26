#include "holberton.h"

/**
 * print_sign - prints +, 0, or - based on positive or negative
 * @n: number o=to check
 *
 * Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}


	_putchar('0');
	return (0);

}
