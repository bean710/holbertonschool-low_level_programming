#include "holberton.h"
#include <stdlib.h>

/**
 * rev_string - Reverses a string in place
 * @s: pointer to the first character in the string
 */
void rev_string(char *s)
{
	char tmp;
	char *str = s;

	for (; *str; str++)
		;
	str--;

	for (; s < str; s++, str--)
	{
		tmp = *s;
		*s = *str;
		*str = tmp;
	}
}
