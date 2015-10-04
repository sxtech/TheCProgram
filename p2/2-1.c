#include <stdio.h>
#include <limits.h>

main()
{
	printf("SINGED_CHAR_MIN=%-10d SINGED_CHAR_MAX=%-10d\n", SCHAR_MIN, SCHAR_MAX);
	printf("UNSINGED_CHAR_MAX=%-10d\n", UCHAR_MAX);
	printf("SINGED_SHORT_MIN=%-10d SINGED_SHORT_MAX=%-10d\n", SHRT_MIN, SHRT_MAX);
	printf("UNSINGED_SHORT_MAX=%-10d\n", USHRT_MAX);
	printf("INT_MIN=%-10d INT_MAX=%-10d\n", INT_MIN, INT_MAX);
	printf("UNSINGED_INT_MAX=%-10u\n", UINT_MAX);
	printf("LONG_MIN=%-11ld LONG_MAX=%-11ld\n", LONG_MIN, LONG_MAX);
	printf("UNSINGED_LONG_MAX=%-11lu\n", ULONG_MAX);
} 