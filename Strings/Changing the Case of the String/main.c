#include <stdio.h>
#include <stdlib.h>

void sameLetters(char c[])
{
  int i;
  for(i=0;c[i]!='\0';i++)
  {
    if((c[i]>=65 && c[i]<=90))
    {
      c[i] = c[i]+32;
    }
    else if(c[i]>=97 && c[i]<=122)
    {
      c[i] = c[i]-32;
    }
    else {
      c[i] = c[i];
    }
  }
  printf("The new string is %s",c);
}

int main()
{
  char name[100];
  scanf("%s",name);
  sameLetters(name);
  return 0;
}
