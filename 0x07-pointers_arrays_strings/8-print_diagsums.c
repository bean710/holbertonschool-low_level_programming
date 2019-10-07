#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals in a number square
 * @a: pointer to the first integer in the dataset
 * @size: the size fo the square (size of one dimension)
 */
void print_diagsums(int *a, int size)
{
	int ltr = 0, rtl = 0;
	int i, j;

	for (i = 0; i < size; i++)
		ltr += *(a + (i * size) + i);

	for (j = 0; j < size; j++)
		rtl += *(a + (j * size) + (size - j - 1));

	printf("%d, %d\n", ltr, rtl);
}
