#include "holberton.h"

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to the first character of the string
 *
 * Return: Value of integer in string
 */
int _atoi(char *s)
{
	int neg, num;

	num = 0;

	for (; *s; s++)
	{
		if (*s >= '0' && *s <= '9')
		{
			num *= 10;
			num += *s - '0';
		}
		else if (num > 0)
		{
			break;
		}
		else if (*s == '-')
		{
			neg--;
		}
		else if (*s == '+')
		{
			neg++;
		}
	}

	return ((neg < 0) ? -num : num);
}
