#include "holberton.h"

/**
 * _pow_recursion - Gets the value of `x` raised to the `y`
 * @x: Base number
 * @y: Exponent number
 *
 * Return: If `y` is less than 0, returns -1. Otherwise returns `x` to the `y`
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
