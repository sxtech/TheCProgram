#include <stdio.h>

int bitcount(unsigned x);
main()
{
	int one;
	unsigned x;
	x = 7;
	one = bitcount(x);
	printf("%d", one);
}

int bitcount(unsigned x)
{
	int b;
	b = 0;
	while (x != 0) {
		x &= (x-1);
		b++;
	}
	return b;
}