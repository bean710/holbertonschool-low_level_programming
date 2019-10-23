#include "3-calc.h"

/**
 * op_add - Adds two integers together
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of `a` and `b`
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one integer from another
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference of `a` and `b`
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers together
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of `a` and `b`
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides one integers into the other
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The quotient of `a` divided by `b`
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the remainder of the division of one integer into the other
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of `a` divided by `b`
 */
int op_mod(int a, int b)
{
	return (a % b);
}
