#include "holberton.h"

/**
 * print_times_table - prints the times table up to n
 * @n: the width and height of the table
 */
void print_times_table(int n)
{
	int i, j, k;
	int num, len;
	int spacing;

	spacing = 4;

	if (n > 15 || n < 0)
		return;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}

	for (i = 0; i < n + 1; i++)
	{
		for (j = 0; j < n + 1; j++)
		{
			num = i * j;

			len = getlen(num);
			if (j != 0)
			{
				_putchar(',');

				for (k = 0; k < spacing - len; k++)
					_putchar(' ');
			}
			for (k = 0; k < len; k++)
				_putchar('0' + getnum(num, k));
		}
		_putchar('\n');
	}
}

/**
 * _pow - Calculates exponents
 * @a: base
 * @b: exponent
 *
 * Return: a^b
 */
int _pow(int a, int b)
{
	int i, ans;

	ans = a;
	for (i = 0; i < b - 1; i++)
	{
		ans *= ans;
	}

	return (b > 0 ? ans : 1);
}

/**
 * getnum - gets the 'index'th digit of num, starting from the left at 0
 * @num: the number to extract digit from
 * @index: the index of the desired digit with 0 being the leftmost digit
 *
 * Return: The 'index'th digit of num
 */
int getnum(int num, int index)
{
	int l;

	l = getlen(num);
	num = num / _pow(10, l - 1 - index);
	return (num % 10);
}

/**
 * getlen - gets the length of the number num
 * @num: the number to get length of
 *
 * Return: length of number 'num'
 */
int getlen(int num)
{
	int i;

	i = 1;
	while (num > 9)
	{
		i++;
		num /= 10;
	}
	return (i);
}
