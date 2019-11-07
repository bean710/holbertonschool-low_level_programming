#include "holberton.h"

/**
 * flip_bits - Calculates how many bits need to be flipped to get from m to n
 * @n: First integer to compare
 * @m: Second integer to compare
 *
 * Return: The number of bits that would need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;

		xor = xor >> 1;
	}

	return (count);
}
