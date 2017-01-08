/*
	Factorials using recursive functions
*/

#include "stdio.h"

int factorial (int i){
	int result;

	if(i == 0){
		result = 1;
	} else {
		result = i * factorial(i - 1);
	}
	

	return result;
}


int main(int argc, char const *argv[])
{
	int init = 1;
	unsigned long long int result;

	while (init != 999){
		printf("Enter the number: ");
		scanf("%i", &init);

		result = factorial(init);

		printf("%i! = %llu\n", init, result);
	}
	return 0;
}