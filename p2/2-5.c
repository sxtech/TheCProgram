#include <stdio.h>

int any(char s[], char c[]);

main()
{
	char s[] = {"show me the money"};
	char c[] = {"zj"};
	
 	int n;
 	n = any(s, c);
	printf("%d\n", n);
}

int any(char s[], char c[])
{
	int i, j, k;
	for (i = 0; s[i] != '\0'; i++) {
		for (k = 0; c[k] != '\0'; k++)
			if (s[i] == c[k])
				return i;
	}
	return -1;
}