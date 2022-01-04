#include <stdio.h>
#include <stdlib.h>
void countVowels(char c[])
{
  int i;
  int vowelCount = 0;
  for(i=0;c[i]!='\0';i++)
  {
    if (c[i]>=65 && c[i]<=90)
    {
      c[i] = c[i] +32;
    }
    else {
      c[i] = c[i];
    }
  }
  for(i=0;c[i]!='\0';i++)
  {
    if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' )
    {
      vowelCount ++;
    }
  }
  printf("The total number of vowels in the string are %d",vowelCount);
}
int main()
{
  // char A[] = "How are you?"
  char c[100];
  int i;
  gets(c);
  int wordCount = 1;
  for(i=0;c[i]!='\0';i++)
  {
    if(i!=0)
    {
      if(c[i] == ' ' && c[i-1]!=' ')
      {
        wordCount++;
      }
    }

  }
  printf("The total number of words is %d\n",wordCount);
  countVowels(c);
  return 0;
}
