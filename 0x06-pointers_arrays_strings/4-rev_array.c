#include "holberton.h"
#include <stdlib.h>

/**
 * reverse_array - Reverses an array of integers in place
 * @s: pointer to the first item in the array 
 */
void reverse_array(int *a, int n)
{
	int *f = a;
	int *l = a;
	int tmp;

	l += (n - 1);

	for (; f < l; f++, l--)
	{
		tmp = *f;
		*f = *l;
		*l = tmp;
	}
}
