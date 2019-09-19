#include <stdio.h>

/**
 * main - Prints lowercase alphabet and then uppercase alphabet
 *
 * Return: 0 Always success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	c = 'A';
	while (c <= 'Z')
		putchar(c++);

	putchar('\n');

	return (0);
}
