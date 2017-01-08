/*
  Tomorrow's date using struct
*/

#include "stdio.h"

int main(int argc, char const *argv[])
{
  /* code */


  struct date
  {
    int day;
    int month;
    int year;  
  };

  struct date today, tomorrow;

  int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 
                                31, 31, 30, 31, 30, 31};

  printf("Enter the date of today dd mm yyyy : \n");
  scanf("%i%i%i", &today.day, &today.month, &today.year);
  printf("Today: %i/%i/%i \n", today.day, today.month, today.year);

  if(((today.year % 4 == 0 && today.year % 100 != 0) 
    || today.year % 400 == 0 ) && today.month == 2 && today.day == 28) {
    ++today.day;    


  } else if(today.month == 12 && today.day == daysPerMonth[today.month-1]){
    ++today.year;
    today.month = 1;
    today.day = 1;
  } else if (today.day == daysPerMonth[today.month-1]){
    today.day = 1;
    ++today.month;
  } else {
    ++today.day;
  }

  printf("Tomorrow: %i/%i/%i \n", today.day, today.month, today.year);  

  return 0;
}