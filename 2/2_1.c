#include <stdio.h>
#include <limits.h>

int main(){
	int intmax, intmin;
	unsigned int unint;
	short shortmax, shortmin;
	unsigned short unshort;
	long longmax, longmin; 
	unsigned long unlong;
	char charmax, charmin;
	unsigned char unchar;

	shortmax = SHRT_MAX;
 	shortmin = SHRT_MIN;
 	unshort = USHRT_MAX;

 	intmax = INT_MAX;
 	intmin = INT_MIN;
 	unint = UINT_MAX;

 	longmax = LONG_MAX;
 	longmin = LONG_MIN;
 	unlong = ULONG_MAX;

	charmax = CHAR_MAX;
	charmin = CHAR_MIN;
	unchar = UCHAR_MAX;

 	printf("Maximum of short: %d\n", shortmax);
 	printf("Minimum of short: %d\n", shortmin);
 	printf("Maximum of unsigned short: %u\n", unshort);

	printf( "Maximum of int: %d\n", intmax);
 	printf("Minimum of int: %d\n", intmin);
 	printf("Maximum of unsigned int: %u\n", unint);
 	
	printf("Maximum of long: %ld\n", longmax);
 	printf("Mimimum of long: %ld\n", longmin);
 	printf("Maximum of unsigned long: %lu\n", unlong);
	
	printf("Maximun of char: %d\n", charmax);
	printf("Minimun of char: %d\n", charmin);
	printf("Maximun of unsigned char: %u\n", unchar);

	return 0;
}
