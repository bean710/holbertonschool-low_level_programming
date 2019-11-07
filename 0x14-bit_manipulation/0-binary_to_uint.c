#include "holberton.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: Pointer to the first charater of the string to be converted
 *
 * Return: Unsigned integer value of the binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, n;
	unsigned int ret = 0;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (n = 1; len > 0; len--, n *= 2)
	{
		if (!(b[len - 1] == '0' ||  b[len - 1] == '1'))
			return (0);

		ret += (b[len - 1] - '0') * n;
	}

	return (ret);
}
