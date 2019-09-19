#include <stdio.h>

/**
 * main - Prints 00-99, separated by commas
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
