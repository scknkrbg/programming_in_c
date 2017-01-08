/*
	Base conversion with functions
*/

#include "stdio.h"

int convertedNumber[64];
long int number;
int base;
int digit = 0;


void getNumberAndBase(void)
{
	//int number, base;

	printf("Enter the number to convert :\n");
	scanf("%i", &number);

	printf("Enter the base :\n");
	scanf("%i", &base);

	if(base < 2 || base > 16)
	{
		printf("Base must be between 2 to 16 !\n");
		base = 10;
		getNumberAndBase();
	} else {
		printf("%i in base %i :\n", number, base);	
	}
}


void convertNumber(void)
{
	do
	{ 	
		convertedNumber[digit] = number % base;
		number = number / base;
		printf("%i", convertedNumber[digit]);
		++digit;
	} while(number != 0);
}

void displayNumber(void)
{
	const char baseList[16] = 
	{'0', '1', '2', '3', '4', '5', '6',	'7', 
	'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	printf("Converted Number :");
	for(--digit; digit >= 0; --digit)
	{
		printf("%c", baseList[convertedNumber[digit]]);
	}
	printf("\n");
}



int main(void)
{
	/*void getNumberAndBase(void);
	void convertNumber(void);
	void displayNumber(void);*/

	getNumberAndBase();
	convertNumber();
	displayNumber();


	return 0;
}





