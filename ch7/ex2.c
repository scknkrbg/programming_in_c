/*
	Triangular function
*/

#include "stdio.h"

int triangular(int n){
	
	int triangularNumber = 0, i = 0;

	for(i = 1; i <= n; ++i){
		triangularNumber += i; 
	}

	return triangularNumber;
}

int main(int argc, char const *argv[])
{	
	int num;
	printf("Enter the what triangular number : \n");
	scanf("%i", &num);

	printf("%ith triangular number %i.\n", num, triangular(num));
	return 0;
}