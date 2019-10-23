#include "function_pointers.h"

/**
 * print_name - Prints a string using the provided function
 * @name: Pointer to the first character in the string
 * @f: Pointer to the function to be used to print
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
