#include <stdio.h>
#include <stdbool.h>

/**
 * main - Prints all 2-digit combinations, separated by commas
 *
 * Return: 0
 */
int main(void)
{
	int i, j;
	bool first;

	first = true;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i != j) && (j > i))
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
				putchar('0' + i);
				putchar('0' + j);
			}
		}
	}
	putchar('\n');

	return (0);
}
