#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while(fahr <= upper) {
		celsius = h2s(fahr);
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
} 

int h2s(int t)
{
	return 5 * (t-32) / 9;
}