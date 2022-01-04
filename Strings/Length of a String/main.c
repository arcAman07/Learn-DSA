#include <stdio.h>
#include <stdlib.h>
int main()
{
  char s[] = "welcome";
  int i;
  int count = 0;
  for(i=0;s[i]!='\0';i++)
  {
    count = count+1;
  }
  printf("Length of the string is %d",count);
  return 0;
}
