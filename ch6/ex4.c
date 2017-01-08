	/* 
		Calculate average of 10 floating nmber.
	*/

	#include "stdio.h"

	int main(int argc, char const *argv[])
	{
		float sum = 0, num, array[10];
		int i;

		for(i = 0; i < 10; ++i)
		{
			scanf("%f", &num);
			array[i] = num;
			sum += num;

		}

		printf("Average of 10 = %.2f\n", sum/10);
		return 0;
	}