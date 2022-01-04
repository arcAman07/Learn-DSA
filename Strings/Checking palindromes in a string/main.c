#include <stdio.h>
#include <stdlib.h>
void palindrome(char c[])
{
  char b[100];
  int i;
  int j;
  int value = 0;
  // 0 - not palindrome
  // 1- palindrome
  for(i=0;c[i]!='\0';i++)
  {

  }
  i = i-1;
  for(j=0;i>=0;i--,j++)
  {
    b[j] = c[i];
  }
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
    printf("The given string is A PALINDROMA");
  }
  else
  {
    printf("The given string is NOT A PALINDROME");
  }
}
int main()
{
  char name[100];
  gets(name);
  palindrome(name);
  return 0;
}
