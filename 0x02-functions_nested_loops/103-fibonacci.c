#include <stdio.h>

/**
 * main - prints sum of all even fibonacci numbers under 4,000,000
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long a, b, c;
	unsigned long s;
	int i;

	a = 1;
	b = 2;
	c = 0;

	s = 2;
	for (i = 0; c < 4000000; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
			s += c;
	}
	printf("%lu\n", s);

	return (0);
}
