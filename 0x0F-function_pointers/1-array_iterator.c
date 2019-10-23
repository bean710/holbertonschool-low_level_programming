#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Runs a given function on each item in an array
 * @array: Pointer to the first integer in an array of integers
 * @size: Size of `array`
 * @action: Pointer to the function to be called on each item in the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
