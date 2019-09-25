#include <stdio.h>


int main(void)
{
	int i, s;

	s = 0; 
	for (i = 0; i < 1024; i += 3)
		s += i;

	for (i = 0; i < 1024; i += 5)
	{
		if (i % 3 != 0)
			s += i;
	}

	printf("%d\n", s);

	return (0);
}
