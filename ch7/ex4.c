/*
	Square root function with epsilon as argument
*/

#include "stdio.h"

float absf(float n){
	if(n < 0)
		n = -n;
	return n;
}


float sqroot(int x, float epsilon){
	float guess = 1.0;
	while(absf(guess * guess - x) >= epsilon){
		guess = (x / guess + guess) / 2.0; 
		printf("%f\n", guess);
	}

	return guess;
}

int main(int argc, char const *argv[])
{
	int x, i;
	float eps[6] = {25.0, 0.1, 0.01, 0.001, 0.0001, 0.00001};
	printf("Enter the number : \n");
	scanf("%i", &x);

	for(i = 0; i < 6; ++i){
		printf("Epsilon %f square root of %i is %f\n", eps[i], x, sqroot(x, eps[i]));
	}

	return 0;
}