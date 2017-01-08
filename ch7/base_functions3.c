/*
	Base conversion with functions
*/

#include "stdio.h"

long int gNumberToConvert; 
int gConvertedArray[64];
int gBase;
int gDigit = 0;


void getNumberAndBase (void){
	printf("Enter number: \n");
	scanf("%li", &gNumberToConvert);

	printf("Enter base: \n");
	scanf("%i", &gBase);

	if(gBase < 2 || gBase > 16){
		printf("Base should be between 2-16!\n");
		getNumberAndBase();
	} else {
		printf("%li to be converted to base %i \n", gNumberToConvert, gBase);
	}

}


void convertNumber (void){
	do {
		gConvertedArray[gDigit] = gNumberToConvert % gBase;
		gNumberToConvert /= gBase;
		++gDigit;
	} while (gNumberToConvert != 0);
}



void displayNumber (void) {
	const char baseList [16] = 
		{'0', '1', '2', '3', '4', '5', '6', '7', 
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	printf("Converted number : ");
	for(--gDigit; gDigit >= 0; --gDigit){
		printf("%c", baseList[gConvertedArray[gDigit]]);
	}
	printf("\n");
}


int main(int argc, char const *argv[])
{
	getNumberAndBase();
	convertNumber();
	displayNumber();

	return 0;
}