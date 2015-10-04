#include <stdio.h>

main()
{
	char c;
	c = 'B';
	int i;
	i = lower(c);
	printf("%c", i);
}

int lower(int c)
{
	
	return (c >= 'A' && c <= 'Z') ? (c +'a'-'A') : c;
}