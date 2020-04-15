#include "search_algos.h"

/**
 * interpolation_search - Searches and array using interpolation
 * @array: Pointer to the first item in the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: Returns the index of value if found, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int hi, lo, mid;

	hi = (int)size - 1;
	lo = 0;

	if (!array)
		return (-1);

	do {
		mid = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));

		if (mid >= (int)size)
		{
			printf("Value checked array[%d] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			lo = mid + 1;
		else if (value < array[mid])
			hi = mid - 1;
		else
			return (mid);
	} while (array[hi] != array[lo] && (array[lo] <= value) &&
			(array[hi]) >= value);

	return (-1);
}
