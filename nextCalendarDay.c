// Take input of Day, Month, Year. Find the next day in a calendar whilst accounting for leap years. Written by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // test
  int year, leapYear, month, day;

  printf("Input the year: ");
  scanf("%d", &year);

  printf("Input the month: ");
  scanf("%d", &month);

  printf("Input the day: ");
  scanf("%d", &day);

  // Account for leapyear
  if (month == 2)
    if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
      leapYear = 1;
  day += 1;

  // Add switches for month accounting for leap year, months ending in 30 days or 31, and end of year 12
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (day <= 31)
      break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (day <= 30)
      break;
  case 2:
    if (day <= 29 && leapYear == 1)
      break;
    else if (day <= 28)
      break;
  default:
    day = 1;
    month += 1;
    if (month > 12)
    {
      month = 1;
      year += 1;
    }
  }
  printf("The format is day/month/year\n");
  printf("The next day is: %d/%d/%d\n", day, month, year);
  return 0;
}