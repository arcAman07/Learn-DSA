#include <stdio.h>
#include <stdlib.h>

// USING A HASH TABLE

int main()
{
  int i,j;
  char a[100];
  gets(a);
  int H[26];
  // CREATING A HASH TABLE OF FIXED SIZE 26 ( FROM A-Z COMPRISING OF 26 LETTERS)
  for(i=0;a[i]!='\0';i++)
  {
    H[a[i]-97]+=1;
  }
  for(j=0;j<26;j++)
  {
    if(H[j]>1)
    {
      printf("%c",j+97);
      printf("%d",H[j]);
    }
  }
  return 0;
}
