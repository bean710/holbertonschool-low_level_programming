#include <stdio.h>

/**
 * main - Prints all hex characters
 *
 * Return: 0 Always success
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c++);
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c++);
	}

	putchar('\n');

	return (0);
}
