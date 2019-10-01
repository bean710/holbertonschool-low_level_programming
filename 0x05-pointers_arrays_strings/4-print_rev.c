#include "holberton.h"

void print_rev(char *s)
{
	int len, i;

	len = 0;

	for (; *s; s++)
		len++;

	s--;

	for (i = 0; i < len; i++)
		_putchar(*(s--));

	_putchar('\n');
}
