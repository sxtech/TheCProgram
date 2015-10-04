#include <stdio.h>

int htoi(char s[]);
int hton(char h);
int lower(int c);

main()
{
	int n;
	char s[10] = {"0Xff"};
	//char h;
	//h = 'f';
	//n = hton(h);
	n = htoi(s);
	printf("%d", n);
} 


int htoi(char s[])
{
	int len, i, n;
	len = strlen(s);
	n = 0;
	if (len < 3)
 		return -1;
	if (s[0] != '0')
		return -1;
	if (s[1] != 'x' && s[1] != 'X')
		return -1;
	for (i = 2; i < len; ++i) {
		if ((s[i] >= '0' && s[i] <= '9') || (s[i] >='a' && s[i] <= 'z') || (s[i] >= 'A' && s[i]<= 'Z')) {
			n = 16 * n + hton(s[i]);
		} else {
			return -1;
		}
	}
	return n;
}

int lower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}

int hton(char h)
{
	int n;
	n = 0;
	if (h >= '0' && h <= '9')
		n = h - '0';
	if (h >='a' && h <= 'f')
		n = h - 'a' + 10;
	if (h >='A' && h <= 'F')
		n = h - 'A' + 10;
	return n;
}