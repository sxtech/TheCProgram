#include <stdio.h>
#include <string.h>

void itoa(int n, char s[], int w);
void reverse(char s[]);

main()
{
	int n = 32;
	char s[100];
	int w = 16;
	itoa(n, s, w);
	printf("%s\n", s);
}

void reverse(char s[])
{
	int c, i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itoa(int n, char s[], int w)
{
	int i, sign, j;
	
	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	if (i < (w-1)) {
		for (j = 0; j < w - i -1; j++)
			s[i++] = ' ';
	}
	s[i] = '\0';
	reverse(s);
}