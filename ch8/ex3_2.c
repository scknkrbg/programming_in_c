/*
	Time difference function
*/

#include "stdio.h"

struct time {
	int hour;
	int minute;
	int second;	
} last, first;


int to_seconds (struct time d){
	int result = d.hour * 60 * 60 + d.minute * 60 + d.second;
	return result;
}

struct time to_time (int second){
	struct time d;
	d.hour = second / 3600;
	d.minute = (second % 3600) / 60;
	d.second = (second % 3600) % 60;

	return d;
}


struct time time_difference (struct time last, struct time first){
	int int_result = to_seconds(last) - to_seconds(first);
	
	if(int_result < 0){
		int_result = 24 * 60 * 60 + int_result;
	}

	struct time result = to_time(int_result);

	return result;
}

int main(int argc, char const *argv[])
{
	struct time result;

	printf("Enter the last time : ");
	scanf("%i%i%i", &last.hour, &last.minute, &last.second);

	printf("Enter the first time : ");
	scanf("%i%i%i", &first.hour, &first.minute, &first.second);

	result = time_difference(last, first);

	printf("%.2i:%.2i:%.2i - %.2i:%.2i:%.2i = %.2i:%.2i:%.2i \n",
	last.hour, last.minute, last.second, 
	first.hour, first.minute, first.second,
	result.hour, result.minute, result.second);


	return 0;
}