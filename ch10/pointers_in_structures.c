/*
	Using pointers in structures.
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
	struct date 
	{
		int day;
		int month;
		int year;
	};


	struct date today, *datePointer;

	datePointer = &today;

	datePointer -> day = 31;
	datePointer -> month = 12;
	datePointer -> year = 2016;

	printf("Date = %i/%i/%i\n", datePointer -> day, 
		datePointer -> month, datePointer -> year % 100);

	return 0;
}