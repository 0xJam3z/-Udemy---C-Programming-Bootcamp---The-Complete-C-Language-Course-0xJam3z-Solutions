// Read a single hex digit is input and output it's correct binary representation.
#include <stdio.h>

int main()
{

  char userInput;

  printf("Input a digit (hex representation): ");
  scanf("%c", &userInput);

  if (userInput >= '0' && userInput <= '9')
  {
    switch (userInput)
    {
    case '0':
      printf("0000\n");
      break;
    case '1':
      printf("0001\n");
      break;
    case '2':
      printf("0010\n");
      break;
    case '3':
      printf("0011\n");
      break;
    case '4':
      printf("0100\n");
      break;
    case '5':
      printf("0101\n");
      break;
    case '6':
      printf("0110\n");
      break;
    case '7':
      printf("0111\n");
      break;
    case '8':
      printf("1000\n");
      break;
    case '9':
      printf("1001\n");
      break;
    }
  }
  else if (userInput >= 'A' && userInput <= 'F')
  {
    switch (userInput)
    {
    case 'A':
      printf("1010\n");
      break;
    case 'B':
      printf("1011\n");
      break;
    case 'C':
      printf("1100\n");
      break;
    case 'D':
      printf("1101\n");
      break;
    case 'E':
      printf("1110\n");
      break;
    case 'F':
      printf("1111\n");
      break;
    }
  }
  else
  {
    printf("Invalid input.\n");
  }
  return 0;
}