#include <stdio.h>
#include<stdlib.h>
struct Array {
  int A[20];
  int size;
  int length;
};
void Display(struct Array arr)
{
  int i;
  for(i=0;i<arr.length;i++)
  {
    printf("%d ",arr.A[i]);
  }
}
