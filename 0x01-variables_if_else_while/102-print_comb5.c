#include <stdio.h>
#include <stdbool.h>

/**
 * main - Prints 00-99, separated by commas
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i, j;
	bool first;

	first = true;
	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i != j && i < j)
			{
				if (!first)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					first = false;
				}
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				putchar('0' + j / 10);
				putchar('0' + j % 10);
			}
		}
	}
	putchar('\n');

	return (0);
}
