#include <stdio.h>

/**
 * main - Prints lowercase alphabet
 *
 * Return: 0 Always success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);

	putchar('\n');

	return (0);
}
