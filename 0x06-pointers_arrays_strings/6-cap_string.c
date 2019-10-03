#include "holberton.h"

/**
 * cap_string - Capitalizes the first letter of each word of a string
 * @a: pointer to string
 *
 * Return: pointer to beginning of string
 */
char *cap_string(char *a)
{
	char *seps = " \t\n,;.!?\"(){}";
	char *s = seps;
	char *p = a;
	char *tmp;
	int diff = ('a' - 'A');

	if (*p >= 'a' && *p <= 'z')
		*p -= diff;

	for (; *p; p++)
	{
		for (s = seps; *s; s++)
		{
			if (*p == *s)
			{
				tmp = p + 1;
				if (*tmp >= 'a' && *tmp <= 'z')
					*tmp -= diff;
			}
		}
	}

	return (a);
}
