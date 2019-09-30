#include "holberton.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*b = *a;
	*a = i;
}
