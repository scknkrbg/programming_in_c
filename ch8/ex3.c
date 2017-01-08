/*
	Elapsed time in hh:mm:ss format
*/


#include "stdio.h"


struct time {
	int hour;
	int minute;
	int second;
} first, second;




struct time time_difference (struct time first, struct time second){
	struct time result;
	if(first.hour - second.hour < 0 ){
		result.hour = 24 + first.hour - second.hour;
		if(first.minute >= second.minute)
			result.minute = first.minute - second.minute;
		else {
			result.minute = 60 + first.minute - second.minute;
			--result.hour;
		}
			if(first.second >= second.second)
				result.second = first.second - second.second;
			else {
				result.second = 60 + first.second - second.second;
				--result.minute;
			}
		

	} else if (first.hour - second.hour > 0) {
		result.hour = first.hour - second.hour;
		if(first.minute >= second.minute)
			result.minute = first.minute - second.minute;
		else {
			result.minute = 60 + first.minute - second.minute;
			--result.hour;
		}
			if(first.second >= second.second)
				result.second = first.second - second.second;
			else {
				result.second = 60 + first.second - second.second;
				--result.minute;
			}
	} else {
		result.hour = 0;
		if(first.minute >= second.minute)
			result.minute = first.minute - second.minute;
		else {
			result.minute = second.minute - first.minute;
			// --result.hour;
		}
			if(first.second >= second.second){
				result.second = 60 - first.second + second.second;
				--result.minute;
			} else {
				result.second = 60 + first.second - second.second;
				--result.minute;
			}
	}

	return result;

}


int main(int argc, char const *argv[])
{
	struct time result;
	printf("Enter the first time :\n");
	scanf("%i%i%i", &first.hour, &first.minute, &first.second);
	printf("Enter the second time :\n");
	scanf("%i%i%i", &second.hour, &second.minute, &second.second);

	result = time_difference(first, second);

	printf("%02i:%02i:%02i - %02i:%02i:%02i = %02i:%02i:%02i\n", first.hour, first.minute, first.second, 
	second.hour, second.minute, second.second, result.hour, result.minute, result.second );

	return 0;
}

