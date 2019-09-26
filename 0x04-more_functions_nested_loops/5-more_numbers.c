#include "holberton.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times,
 *		  separated by a newline
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('0' + j / 10);

			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
