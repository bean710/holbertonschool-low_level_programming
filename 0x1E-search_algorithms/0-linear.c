#include "search_algos.h"

/**
 * linear_search - Search through an array linearly
 * @array: Pointer to the first item in the array
 * @size: The size of the array
 * @value: The value to look for in the array
 *
 * Return: The index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
