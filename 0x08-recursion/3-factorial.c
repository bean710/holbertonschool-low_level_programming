#include "holberton.h"

/**
 * factorial - Findes factorial of `n`
 * @n: Number to find factorial of
 *
 * Return: If `n` < 0, returns -1. Otherwise returns `n` factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
