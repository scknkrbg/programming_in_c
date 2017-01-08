/*
	Square root function with epsilon as argument
*/

#include "stdio.h"

long int x_to_the_n(int number, int power){
	int i;
	const int number_org = number;
	if(power == 0)
		number = 1;
	for(i = 1; i < power; ++i){
		number *= number_org;
	}
	return number;
}


int main(int argc, char const *argv[])
{
	int number, power;
	printf("Enter the number & power : \n");
	scanf("%i%i", &number, &power );

	printf("%i to the power %i = %li\n", number, power, x_to_the_n(number, power));

	return 0;
}