// Input a character to find out if it's a lowercase or uppercase letter, or if it's a digit/other using ascii table.
#include <stdio.h>
#include <stdlib.h>

int main()
{

  char userInput, hexValue;

  printf("Input a character: ");
  scanf("%c", &userInput);
  hexValue = ("%X", userInput);

  if (hexValue >= 0x41 && hexValue <= 0x5A)
    printf("%c is an uppercase value. \n", hexValue);
  else if (hexValue >= 0x61 && hexValue <= 0x7A)
    printf("%c is a lowercase value. \n", hexValue);
  else if (hexValue >= 0x30 && hexValue <= 0x39)
    printf("%c is a digit. \n", hexValue);
  else
    printf("%c is of type other. \n");

  return 0;
}
