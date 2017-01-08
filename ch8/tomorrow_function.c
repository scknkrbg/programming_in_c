/*
	Calculate tomorrow's date by using functions
*/

#include "stdio.h"
#include "stdbool.h"

struct date {
	int day;
	int month;
	int year;
};


int endOfMonths(struct date d){
	bool isLeapYear(struct date d);

	const int monthEnds[] = {31, 28, 31, 30, 31, 30,
							 31, 31, 30, 31, 30, 31};

	int day;

	if(d.month == 2 && isLeapYear(d) == true){
		day = 29;
	} else
		day = monthEnds[d.month - 1];

	return day;			 
}

bool isLeapYear(struct date d){
	bool leap = false;

	if((d.year % 4 == 0 && d.year != 100) || d.year % 400 == 0){
		leap = true;
	}
	return leap;
}


struct date dateUpdate(struct date today){
	struct date tomorrow;

	if (endOfMonths(today) != today.day){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if (today.month == 12){
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	} else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	return tomorrow;
}


int main(int argc, char const *argv[])
{
	struct date today, tomorrow;
	printf("Enter the date in format dd mm yyyy :\n");
	scanf("%i%i%i", &today.day, &today.month, &today.year);

	tomorrow = dateUpdate(today);

	printf("Today: %i/%i/%i\n", today.day, today.month, today.year);
	printf("Tomorrow: %i/%i/%i\n", tomorrow.day, tomorrow.month, tomorrow.year);
	return 0;
}