/*
	Solving quadratic functions
*/

#include "stdio.h"


float power(float number, float power){
	int i;
	
	float number_org;
	
	number_org = number;
	
	if(power == 0)
		number = 1;
	
	for(i = 1; i < power; ++i)
		number *= number_org;

	return number;
}


float discriminant(float a, float b, float c){
	float disc;
	disc = power(b, 2) - 4*a*c;
	return disc;
}




float sqroot(float number){
	double guess, prec;
	guess = 1.0;
	prec = 1.e-32;
	while((guess * guess) / number < 1 || (guess * guess) / number > 1.00001)
	{
		guess = (number / guess + guess) / 2.0;
	}
	return guess;
}

void quadratic(float a, float b, float c){
	float x1, x2;
	
	if(discriminant(a, b, c) < 0){
		printf("Roots are Imaginary!\n");
	} else {
		x1 = ((-b - sqroot(discriminant(a, b, c))) / (a*2)); 
		x2 = ((-b + sqroot(discriminant(a, b, c))) / (a*2));
		printf("The roots are %g and %g\n", x1, x2);
	}
}


int main(int argc, char const *argv[])
{	
	float a, b, c;
	printf("Enter the a, b, c numbers : \n");
	scanf("%f%f%f", &a, &b, &c);

	quadratic(a, b, c);

	
	return 0;
}