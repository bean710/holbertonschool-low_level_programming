#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Outputs a random number, its last digit, and whether the last digit
 *	is less than 6 (but not 0), is greater than 5, and/or is 0
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	printf("Last digit of %d is %d", n, last);
	if (last > 5)
	{
		printf(" and is greater than 5");
	}
	if (last == 0)
	{
		printf(" and is 0");
	}
	if ((last < 6) && (last != 0))
	{
		printf(" and is less than 6 and not 0");
	}
	printf("\n");

	return (0);
}
