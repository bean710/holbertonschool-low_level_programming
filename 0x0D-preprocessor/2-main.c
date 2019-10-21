#include <stdio.h>

/**
 * main - Prints the name of this file
 *
 * Return: Always 1
 */
int main(void)
{
	char *c = __FILE__;

	printf("%s\n", c);

	return (1);
}
