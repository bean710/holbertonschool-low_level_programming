#include "holberton.h"

/**
 * get_bit - Gets the bit value at a certain inded
 * @n: The number to get bit values from
 * @index: The index of the bit to get
 *
 * Return: the value of the bit or -1 on failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * CHAR_BIT - 1)
		return (-1);

	mask = mask << index;

	return ((n & mask) ? 1 : 0);
}
