#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches an array using jump search
 * @array: Pointer to the first item in the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jsize, i;

	if (!array)
		return (-1);

	jsize = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += jsize)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%d] and [%d]\n", i - jsize, i);

	for (i -= jsize; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
