/*
	sort3() function 
*/

#include "stdio.h"

void sort3(int a, int b, int c)
{
	int *max, *mid, *min;

	if(a <= b)
	{
		if(a <= c)
		{
			min = &a;
			
			if(c <= b)
			{
				mid = &c;
				max = &b;
			}
			else 
			{
				mid = &b;
				max = &c;
			}
		}
		else
		{
			min = &c;
			mid = &a;
			max = &b;
		}
	}
	else 
	{
		if(a >= c)
		{
			max = &a;

			if(c >= b)
			{
				mid = &c;
				min = &b;
			}
			else
			{
				mid = &b;
				min = &c;
			}
		}
		else
		{
			max = &c;
			mid = &a;
			min = &b;
		}
	}
	printf("%i %i %i \n", *min, *mid, *max);
}


int main(int argc, char const *argv[])
{
	int x = 98, y = 34, z = 1;

	sort3(x, y, z);



	return 0;
}