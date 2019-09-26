#include "holberton.h"

/**
 * print_numbers - Prints digits 0 through 9
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);

	_putchar('\n');
}
