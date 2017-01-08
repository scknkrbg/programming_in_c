/*
	Update date and time together with clockKeeper function
*/

#include "stdio.h"
#include "stdbool.h"


struct date
{
	int day, month, year;
};


struct time 
{
	int hour, minute, second;
	
};


struct dateAndTime
{
	struct date date; 
	struct time time;	
} dt;


struct time timeUpdate(struct time t)
{
	if(t.second != 59)
		++t.second;
	else if(t.minute != 59)
	{
		t.second = 0;
		++t.minute;
	} 
	else if(t.hour != 23)
	{
		++t.hour;
		t.minute = 0;
		t.second = 0;
	}
	else
	{
		t.second = 0;
		t.minute = 0;
		t.hour = 0;
	}

	return t;
};



bool isLeapYear(struct date d)
{
	bool leapYear = false;
	if((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
	{
		leapYear = true;
	}
	return leapYear;
}


int endOfMonth(struct date d)
{
	const int end[12] = {31, 28, 31, 30, 31, 30,
						 31, 31, 30, 31, 30, 31};

	if(d.month == 2 && isLeapYear(d) == true)
		d.day = 29;
	else
		d.day = end[d.month - 1];
	return d.day;
}


struct date dateUpdate(struct date d)
{
	struct date tomorrow;

	if(d.day != endOfMonth(d))
		tomorrow = (struct date) {++d.day, d.month, d.year};
	else if(d.month != 12)
		tomorrow = (struct date) {d.day = 1, ++d.month, d.year};
	else
		tomorrow = (struct date) {d.day = 1, d.month = 1, ++d.year};
		
	return tomorrow;
};


struct dateAndTime clockKeeper(struct dateAndTime dt)
{
	dt.time = timeUpdate(dt.time);
	if(dt.time.hour == 0 && dt.time.minute == 0 &&  dt.time.second == 0)
	// if(dt.time == (struct time) {0, 0, 0})
	{
		dt.date = dateUpdate(dt.date);
	}

	return dt;		
};


int main(int argc, char const *argv[])
{
	printf("Enter the date dd mm yyyy format : ");
	scanf("%i%i%i",&dt.date.day, &dt.date.month, &dt.date.year); 
		
	printf("Enter the time hh mm ss foramt : ");
	scanf("%i%i%i", &dt.time.hour, &dt.time.minute, &dt.time.second);


	// pre-update
	printf("%.2i/%.2i/%i %.2i:%.2i:%.2i\n",
		dt.date.day, dt.date.month, dt.date.year,
		dt.time.hour, dt.time.minute, dt.time.second);

	dt = clockKeeper(dt);

	// post-update
	printf("%.2i/%.2i/%i %.2i:%.2i:%.2i\n",
		dt.date.day, dt.date.month, dt.date.year,
		dt.time.hour, dt.time.minute, dt.time.second);
	return 0;
}



