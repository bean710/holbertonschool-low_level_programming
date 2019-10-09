#include "holberton.h"

/**
 * _sqrt_recursion - gets the square root of `n` using recursion
 * @n: number to get square root of
 *
 * Return: square root of `n`
 */
int _sqrt_recursion(int n)
{
	return (check_square(0, n));
}


int check_square(int i, int n)
{
	int sq = i * i;

	if (sq > n)
		return (-1);

	if (sq == n)
		return (i);

	return (check_square(i + 1, n));
}
