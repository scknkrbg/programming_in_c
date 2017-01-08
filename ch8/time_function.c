/*
	Incrementing a second in a given time
*/


#include "stdio.h"
#include "stdbool.h"

struct time{
	int hour;
	int minute;
	int second;
};


bool isDayComplete(struct time t){
	bool dayComplete = false;
	if(t.hour == 23 && t.minute == 59 && t.second == 59){
		dayComplete = true;
	}
	return dayComplete;
}

bool isHourComplete(struct time t){
	bool hourComplete = false;
	if(t.minute == 59 && t.second == 59){
		hourComplete = true;
	}
	return hourComplete;
}


bool isMinuteComplete(struct time t){
	bool minuteComplete = false;
	if(t.second == 59){
		minuteComplete = true;
	}
	return minuteComplete;
}


struct time timeUpdate(struct time t){
	struct time n;

	if(isDayComplete(t) == true){
		n.hour = 0;
		n.minute = 0;
		n.second = 0;
	} else if (isHourComplete(t) == true){
		n.hour = t.hour + 1;
		n.minute = 0;
		n.second = 0;
	} else if (isMinuteComplete(t) == true) { // if the mimute is complete!
		n.hour = t.hour;
		n.minute = t.minute + 1;
		n.second = 0;
	} else {
		n.hour = t.hour;
		n.minute = t.minute;
		n.second = t.second + 1;
	}
	return n;
}


int main(int argc, char const *argv[])
{
	struct time t, n;
	printf("Enter the time to increment one second (hh mm ss) :\n");
	scanf("%i%i%i", &t.hour, &t.minute, &t.second);

	n = timeUpdate(t);

	printf("Time : %.2i:%.2i:%.2i\n", t.hour, t.minute, t.second);
	printf("Next : %02i:%02i:%02i\n", n.hour, n.minute, n.second);

	return 0;
}
