#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Checks an array of integers using a compare function
 * @array: Pointer to the first item in the array of integers
 * @size: Size of the array
 * @cmp: Pointer to the function to compare the number
 *
 * Return: The index if match was found, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
