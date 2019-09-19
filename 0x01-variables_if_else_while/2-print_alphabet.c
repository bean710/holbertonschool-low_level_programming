#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 *
 * Return: 0 Always success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	putchar('\n');

	return (0);
}
