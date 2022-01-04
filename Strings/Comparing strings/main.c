#include <stdio.h>
#include <stdlib.h>
void compare(char b[], char c[])
{
  int i;
  int j;
  int value = 0;
  for(i=0,j=0;b[i]!='\0',c[j]!='\0';i++,j++)
  {
    if(b[i] == c[j])
    {
      value = 1;
    }
    else
    {
      value = 0;
      break;
    }
  }
  if (value == 1)
  {
    printf("Both the strings are EQUAL");
  }
  else
  {
    printf("Both the strings are NOT EQUAL");
  }
}
int main()
{
  char b[100];
  char c[100];
  gets(b);
  gets(c);
  compare(b,c);
  return 0;
}
