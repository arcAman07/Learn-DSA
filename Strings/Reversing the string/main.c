#include <stdio.h>
#include <stdlib.h>
void reverse(char c[])
{
  int i;
  char reverse[100];
  for(i=0;c[i]!='\0';i++)
  {

  }
  i = i-1;
  for(int j=0;i>=0;i--,j++)
  {
    reverse[j] = c[i];
  }
  printf("Reversed string is %s",reverse);
}
int main()
{
  char name[100];
  gets(name);
  reverse(name);
  return 0;
}
