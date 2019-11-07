#include "holberton.h"

/**
 * clear_bit - clears the bit at the index
 * @n: Pointer to the unsigned long int to be changed
 * @index: The index of the bit to clear
 *
 * Return: 1 for success, -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ULONG_MAX - 1;

	if (!n || index >= sizeof(unsigned long int) * CHAR_BIT - 1)
		return (-1);

	while (index--)
		mask = (mask << 1) | 1;

	*n = *n & mask;

	return (1);
}
