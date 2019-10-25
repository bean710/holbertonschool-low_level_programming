#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * is_match - Checks if a character matches the set
 * @c: The character to check
 *
 * Return: 0 if no match, nonzero if match
 */
int is_match(char c)
{
	return (c == 'c' || c == 'i' || c == 'f' || c == 's');
}

/**
 * print_all - Prints a list of items of several types
 * @format: A pointer to the first character in the string that gives the
 * type and position of each argument
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list valist;
	char *svar;

	va_start(valist, format);

	i = 0;

	while (format[i])
	{
		if (i != 0 && is_match(format[i]))
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;

			case 'i':
				printf("%d", va_arg(valist, int));
				break;

			case 'f':
				printf("%f", va_arg(valist, double));
				break;

			case 's':
				svar = va_arg(valist, char *);
				printf("%s", (svar ? svar : "(nil)"));
				break;
		}

		i++;
	}
	printf("\n");

	va_end(valist);
}
