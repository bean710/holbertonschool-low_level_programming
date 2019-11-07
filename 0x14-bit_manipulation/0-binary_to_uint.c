#include "holberton.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, n;
	unsigned int ret = 0;

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
