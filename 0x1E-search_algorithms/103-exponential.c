#include "search_algos.h"

/**
 * print_arr - Prints an array from `begin` to `end`
 * @arr: Pointer to the beginning of the array
 * @begin: Index to start printing at
 * @end: Index to stop printing at
 */
void print_arr(int *arr, int begin, int end)
{
	printf("Searching in array: ");
	for (; begin <= end; begin++)
	{
		if (begin == end)
			printf("%d\n", arr[begin]);
		else
			printf("%d, ", arr[begin]);
	}
}

/**
 * binary_search - Uses a binary search algorithm to find a number
 * @array: Pointer to the first element in the array
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int hi, lo, mid;

	hi = (int)size - 1;
	lo = 0;

	if (!array)
		return (-1);

	while (lo <= hi)
	{
		print_arr(array, lo, hi);
		mid = (lo + hi) / 2;
		if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * exponential_search - Searches an array using the exponential algorithm
 * @array: Pointer to the first item in the array
 * @size: The size of the array
 * @value: The value to look for
 *
 * Return: The index of the value if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int lo = 1, hi;

	if (!array)
		return (-1);

	while (lo < (int)size && array[lo] < value)
	{
		printf("Value checked array[%d] = [%d]\n", lo, array[lo]);
		lo *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", lo / 2, lo - 1);

	if (lo + 1 < (int)size)
		hi = lo + 1;
	else
		hi = (int)size;

	lo /= 2;

	return (binary_search(array + lo, hi - lo, value));
}
