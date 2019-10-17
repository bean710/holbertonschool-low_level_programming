#include "holberton.h"
#include <stdlib.h>

/**
 * rev_string - Reverses a string in place
 * @s: pointer to the first character in the string
 */
void rev_string(char *s)
{
	int i;
	char tmp;
	char *str;

	for (i = 0; s[i]; i++)
		;
	i--;

	str = (s + i);

	for (; s < str; s++, str--)
	{
		tmp = *s;
		*s = *str;
		*str = tmp;
	}
}
