/*
	monthName function that takes enum data type as argument 
	and returns a pointer to a character string.
*/

#include "stdio.h"


enum month {January = 1, February, March, April, May, June, 
	July, August, September, October, November, December};



const char* monthName(enum month m)
{
	switch(m)
	{
		case January: return "January";
		case February: return "February";
		case March: return "March";
		case April: return "April";
		case May: return "May";
		case June: return "June";
		case July: return "July";
		case August: return "August";
		case September: return "September";
		case October: return "October";
		case November: return "November";
		case December: return "December";
	}	
}

int main(int argc, char const *argv[])
{
	enum month m = 7;

	
	printf("%s\n", monthName(m));
	return 0;

}



