/*
	dateUpdate() function with the pointer arguments
*/

#include "stdio.h"
#include "stdbool.h"

struct date
{
	int day;
	int month;
	int year;
	struct date *next;
};


const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



bool leapYear(struct date *d)
{
	if((d -> year % 4 == 0 && d -> year % 4 != 100) || d -> year % 400 == 0)
		return true;
	else
		return false;
	return false;		
}



int numOfDays (struct date *d)
{
	if(leapYear(d) && d -> month == 2)
		return 29;
	else
		return days[d -> month - 1];
	return -1;
}



struct date *dateUpdate(struct date *d)
{
	if(d -> day != numOfDays(d))
		d -> day += 1;
	else if(d -> month != 12)
	{
		d -> day = 1;
		d -> month += 1;
	}
	else
	{
		d -> day = 1;
		d -> month = 1;
		d -> year += 1;
	}
	return d;
}



int main(int argc, char const *argv[])
{
	struct date today, tomorrow, *ptrToday, *ptrTomorrow;

	ptrToday = &today;
	ptrTomorrow = &tomorrow;
	today.next = &tomorrow;
	
	printf("Enter the date (dd mm yyyy) :\n");
	scanf("%i%i%i", &ptrToday -> day, &ptrToday -> month, &ptrToday -> year);
	ptrTomorrow = dateUpdate(ptrToday);
	
	printf("Tomorrow : %i/%i/%i\n", ptrTomorrow -> day, ptrTomorrow -> month, ptrTomorrow -> year);

	
	return 0;
}


