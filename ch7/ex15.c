/*
	Base conversion with functions
*/

#include "stdio.h"

long int gNumberToConvert = 1; 
int gConvertedArray[64];
int gBase;
int gDigit;


void getNumberAndBase (void){
	
	printf("Enter number to be converted: \n");
	scanf("%li", &gNumberToConvert);

	if(gNumberToConvert != 0){
		printf("Enter base: \n");
		scanf("%i", &gBase);	
	}
		
	while(gNumberToConvert !=0 && (gBase < 2 || gBase > 16)){
		printf("Base should be between 2-16!\n");
		printf("Enter base: \n");
		scanf("%i", &gBase);
	}
 	printf("%li to be converted to base %i \n", gNumberToConvert, gBase);
	 
}




void convertNumber (void){
	gDigit = 0;
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
	while (gNumberToConvert != 0){
		getNumberAndBase();

		if(gNumberToConvert == 0){
			printf("Exiting program...\n");
			break;
		}

		convertNumber();
		displayNumber();
		gNumberToConvert = 1;		
	}



	return 0;
}