// Take inputs of day, month, year and print them out in hexadecimal format by 0xJam3z
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int day, month, year;
  printf("Input the year: ");
  scanf("%d", &year);
  printf("Input the Month: ");
  scanf("%d", &month);
  printf("Input the day: ");
  scanf("%d", &day);
  printf("The date will be printed in DAY/MONTH/YEAR format\n");
  printf("The date in hexicdecimal is 0x%X/0x%X/0x%X\n", day, month, year);

  return 0;
}
