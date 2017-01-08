/*
	Variable lenght array test
*/

#include "stdio.h"
#include "float.h"

int main(int argc, char const *argv[])
{
	int i, FibNums, t;
	printf("unsigned long long int = %E\n", FLT_MAX;
	printf("Enter the number of Fibonacci numbers :\n");
	scanf("%i", &FibNums);

	unsigned long long int Fibonacci[FibNums];

	Fibonacci[0] = 0;
	Fibonacci[1] = 1;

	for(i = 2; i < FibNums; ++i)
	{
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2]; 
	} 

	for(i = 0; i < FibNums; ++i)
	{
		printf("%llu\t", Fibonacci[i]);
	}

	printf("\n");
	return 0;
}