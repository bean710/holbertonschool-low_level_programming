#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints `n` number of given strings, separated by the given
 * separator
 * @separator: Pointer to the first character of the string to be used as the
 * separator
 * @n: Number of strings of the strings given to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *s;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0 && separator != NULL)
			printf("%s", separator);

		s = va_arg(valist, char *);
		printf("%s", (s == NULL ? "(nil)" : s));
	}
	printf("\n");

	va_end(valist);
}
