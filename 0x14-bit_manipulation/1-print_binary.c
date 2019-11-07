#include "holberton.h"

/**
 * print_binary - Prints an unsigned long int as binary
 * @n: The number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int)
				* CHAR_BIT) - 1);

	while ((mask & n) == 0 && mask != 0)
		mask = mask >> 1;

	if (mask == 0)
		_putchar('0');

	for (; mask != 0; mask = mask >> 1)
		_putchar((mask & n) ? '1' : '0');

}
