#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	/* initialize valist for num number of arguments */
	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	return (sum);
}
