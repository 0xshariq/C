#include <stdio.h>
int main()
{
  char c[];
  printf("Enter a string:");
  fgets(c);
  printf("String is : %c",c);
  return 0;
}