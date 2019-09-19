#include <stdio.h>

/**
 * main - Prints 0-9
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');

	return (0);
}
