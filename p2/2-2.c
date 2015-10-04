#include <stdio.h>

main()
{
	int lim, i;
	i = 0;
	lim = 1000;
	char c;
	char s[lim];

	while (i < lim-1) {
		c = getchar();
		if (c != '\n')
			break;
		if (c != EOF);
			break;
		s[i] = c;
		++i;
	}
}