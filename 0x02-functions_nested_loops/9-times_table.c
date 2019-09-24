#include "holberton.h"

/**
 * times_table - prints times table up to 9
 *
 * Return: always 0
 */
void times_table(void)
{
	int i, j;
	int upto;
	int num;

	upto = 9;
	for (i = 0; i <= upto; i++)
	{
		for (j = 0; j <= upto; j++)
		{
			num = i * j;

			if (j != 0)
			{
				_putchar(',');
				if (num < 100)
				{
					_putchar(' ');
					if (num < 10)
						_putchar(' ');
				}
			}

			if (num >= 10)
				_putchar('0' + num / 10);
			_putchar('0' + num % 10);

		}
	_putchar('\n');
	}
}
