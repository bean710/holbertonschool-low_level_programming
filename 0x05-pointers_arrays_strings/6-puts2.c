#include "holberton.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: pointer to first character of string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str && (i == 0 || *str[i - 1]); str += 2)
	{
			_putchar(*str);
	}
	_putchar('\n');
}
