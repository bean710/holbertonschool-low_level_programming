#include "holberton.h"

/**
 * set_bit - Sets a certain bit of a number
 * @n: Pointer to the unsigned long int to be changed
 * @index: Index of the bit to be changed
 *
 * Return: 1 for success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index >= sizeof(unsigned long int) * CHAR_BIT -1 || n == NULL)
		return (-1);

	mask = mask << index;
	
	*n = *n | mask;

	return (1);
}
