/*
	Square root function with epsilon as argument
*/

#include "stdio.h"

double absf(float n){
	if(n < 0)
		n = -n;
	return n;
}


double sqroot(int x, double prec){
	double guess = 1.0;
	while(absf((guess * guess) / x) < 1.0  || absf((guess * guess) / x) > (1.0 + prec)){
		guess = (x / guess + guess) / 2.0; 
		printf("%f\n", guess);
	}

	return guess;
}

int main(int argc, char const *argv[])
{
	int x, i;
	double eps[6] = {1.e-32, 1.e-10, 1.e-5, 0.001, 0.01, 0.1};
	printf("Enter the number : \n");
	scanf("%i", &x);

	//sqroot(x);
	for(i = 0; i < 6; ++i){
		printf("Epsilon %g square root of %i is %.3g\n", eps[i], x, sqroot(x, eps[i]));
	}

	return 0;
}