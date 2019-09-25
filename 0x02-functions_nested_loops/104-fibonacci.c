#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with 1, 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a, ao;
	unsigned long int b, bo;
	unsigned long int c, co;
	int i;

	a = 1;
	ao = 0;
	b = 2;
	bo = 0;
	c = 0;
	co = 0;

	printf("1, 2");
	for (i = 0; i < 96; i++)
	{
		c = a + b;
		co = ao + bo;
		if (c > 999999999999999999)
		{
			co += 1;
			c %= 1000000000000000000;
		}
		a = b;
		ao = bo;
		b = c;
		bo = co;

		printf(", ");
		if (co != 0)
			printf("%lu", co);
		printf("%lu", c);
	}
	printf("\n");
	return (0);
}
