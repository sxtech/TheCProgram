#include <stdio.h>

void squeeze(char s[], char c[]);

main()
{
	char s[] = {"show me the money"};
	char c[] = {"mn"};
	
	squeeze(s, c);
	printf("%s", s);
}

void squeeze(char s[], char c[])
{
	int i, j, k;
	int remove;
	remove = 0;
	for (i=j=0; s[i] != '\0'; i++) {
		remove = 0;
		for (k = 0; c[k] != '\0'; k++)
			if (s[i] == c[k])
				remove = 1;
		if (remove == 0)
			s[j++] = s[i];
	}
	s[j] = '\0';
}