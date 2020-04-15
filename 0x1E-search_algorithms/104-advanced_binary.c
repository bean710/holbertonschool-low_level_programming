#include "search_algos.h"

/**
 * print_arr - Prints an array from `begin` to `end`
 * @arr: Pointer to the beginning of the array
 * @begin: Index to start printing at
 * @end: Index to stop printing at
 */
void print_arr(int *arr, int begin, int end)
{
	if (begin <= end)
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
 * advanced_binary - Uses binary search to find the first ocurrence of a value
 * @array: Pointer to the first item in the array
 * @size: The size of the array
 * @value: The value to look for
 *
 * Return: The index of the value if found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, ret;

	if (!array)
		return (-1);

	print_arr(array, 0, size - 1);

	if (size == 1 && array[0] != value)
		return (-1);

	mid = (size - 1) / 2;
	if (array[mid] < value)
	{
		ret = advanced_binary(array + mid + 1, size / 2, value);
		return (ret == -1 ? -1 : ret + mid + 1);
	}
	else if (array[mid] > value)
		return (advanced_binary(array, size / 2 - 1, value));
	else if (mid != 0)
		return (advanced_binary(array, size / 2 + 1, value));
	else if (array[mid] == value)
		return (mid);

	return (-1);
}
