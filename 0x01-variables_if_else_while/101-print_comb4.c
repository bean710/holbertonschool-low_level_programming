#include <stdio.h>
#include <stdbool.h>

/**
 * main - Prints all 3-digit combinations, separated by commas
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;
	bool first;

	first = true;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if ((i != j) && (i != k) && (k != j) && (j > i) && (k > j))
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
					putchar('0' + k);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
