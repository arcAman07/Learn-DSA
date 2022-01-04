#include <stdio.h>
#include <stdlib.h>
int validateString(char c[])
{
  int i;
  for(i=0;c[i]!='\0';i++)
  {
    if(!(c[i]>=65 && c[i]<=90) && !(c[i]>=97 && c[i]<=122) && !(c[i]>=48 && c[i]<=57))
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  char c[100];
  gets(c);
  int value = validateString(c);
  if(value == 0)
  {
    printf("Invalid string");
  }
  else
  {
    printf("Valid string");
  }
  return 0;
}
