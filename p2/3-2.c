#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

main()
{
	char s[1000];
	char t[] = {"show\\tme\\nthe\\tmoney"};
	//escape(s, t);
	//printf("%s\n", t);
	//printf("%s\n", s);
	unescape(s,t);
	printf("%s\n", s);
}

void escape(char s[], char t[])
{
	int i, j;
	int len = strlen(t);

	for (i = j = 0; i < len; ++i) {
		switch (t[i]) {
			case '\n':
				s[j] = '\\';
				j++;
				s[j] = 'n';
				j++;
				break;
			case '\t':
				s[j] = '\\';
				j++;
				s[j] = 't';
				j++;
				break;
			default:
				s[j] = t[i];
				j++;
				break;
		}
	}
	s[j] = '\0';
}

void unescape(char s[], char t[])
{
	int i, j;
	int len = strlen(t);
	i = j = 0;
	while (i < len) {
		if (t[i] == '\\') {
			switch (t[i+1]) {
				case 't':
					s[j] = '\t';
					j++;
					break;
				case 'n':
					s[j] = '\n';
					j++;
					break;
				default:
					s[j] = t[i];
					j++;
					s[j] = t[i+1];
					j++;
					break;
			}
			i += 2;
		} else {
			s[j] = t[i];
			i++;
			j++;
		}
	}
	s[j] = '\0';
}