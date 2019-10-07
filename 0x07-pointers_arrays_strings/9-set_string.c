#include "holberton.h"

/**
 * set_string - sets the value of s to the address of to
 * @s: double pointer to be changed
 * @to: pointer whose address should get pointed to by s
 */
void set_string(char **s, char *to)
{
	*s = to;
}
