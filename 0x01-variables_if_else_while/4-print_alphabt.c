#include <stdio.h>

/**
 * main - Prints lowercase alphabet without 'q' or 'e'
 *
 * Return: 0 Always success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (!((c == 'q') || (c == 'e')))
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
