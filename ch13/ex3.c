/*
	Finding types after operations.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	float     f = 1.00;
	short int i = 100;
	long int  l = 500L;
	double    d = 15.00;
	

	printf("%f\n", f + i); // float
	printf("%.1f\n", l / d); // float
	printf("%.4f\n", (i / l) + f); // float
	printf("%li\n", l * i );
	printf("%.1f\n", f / 2);
	printf("%f\n", i / (d + f));
	printf("%.1f\n", l / (i * 2.0));
	printf("%.1f\n", l + i / (double) 1 );


	return 0;
}