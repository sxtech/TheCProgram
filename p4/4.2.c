#include <stdio.h>
#include <ctype.h>
#include <math.h>

double atof(char s[]);

main()
{
	char s[] = {"12.455"};
	char s2[] = {"1.2435e+6"};
	double f;
	f = atof(s2);
	printf("%f\n", f);
}

double atof(char s[])
{
	double val, power, e;
	int i, sign, sign_e;
	
	
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (s[i] == 'e') {
		i++;
		sign_e = (s[i] == '-') ? -1 : 1;
		i++;
		for (e = 0.0; isdigit(s[i]); i++)
			e = 10.0 * e + (s[i] - '0');
		if (sign_e == -1)
			return (sign * val / power) / pow(10.0, e);
		else
			return (sign * val / power) * pow(10.0, e);
	}
	
	return sign * val / power;
}