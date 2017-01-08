/* 
	Difference between two dates in days
*/

#include "stdio.h"

struct date
{
	int day;
	int month;
	int year;	
} first, second;
const int redundant = 621049;

int F_function(year, month){
	if(month <= 2){
		--year;
	}
	return year;
}

int G_function(month){
	if(month <= 2){
		month += 13;
	} else {
		++month;
	}
	return month;
}


int N_function (struct date d){
	int N;

	N = (1461 * F_function(d.year, d.month) / 4) + 
	(153 * G_function(d.month) / 5) + d.day;

	return N;
}

int day_difference(struct date first, struct date second){
	int difference = N_function(first) - N_function(second);
	if(difference < 0) difference *= -1;
	return difference;
}


int dayOfWeek(struct date d){
	int n;
	
	n = (N_function(d) - redundant) % 7;
	return n;
}


int main(int argc, char const *argv[])
{
	printf("Enter the first date :\n");
	scanf("%i%i%i", &first.day, &first.month, &first.year);

	printf("N function %i, constant %i \n", N_function(first), redundant);

	printf("%i/%i/%i = %i\n", first.day, first.month, first.year, dayOfWeek(first));

	// printf("Enter the second date :\n");
	// scanf("%i%i%i", &second.day, &second.month, &second.year);

	// printf("Difference between %i/%i/%i and %i/%i/%i is %i\n",
	// first.day, first.month, first.year, second.day, second.month, second.year, 
	// day_difference(first, second));



	return 0;
}