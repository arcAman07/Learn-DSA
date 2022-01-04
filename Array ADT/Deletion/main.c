#include <stdio.h>
#include <stdlib.h>
struct Array {
  int A[20];
  int size;
  int length;
};
void Delete(struct Array *arr,int index)
{
  if (index>=0 && index<arr->length)
  {
    int i;
    for(i=index;i<arr->length;i++)
    {
      arr->A[i] = arr->A[i+1];
    }
    arr->length--;
  }
}

void Display(struct Array arr)
{
  int i;
  for(i=0;i<arr.length;i++)
  {
    printf("%d ",arr.A[i]);
  }
}

void main()
{
  struct Array arr = {{2,3,4,5,6,7},20,6};
  Delete(&arr,4);
  Display(arr);
  printf("\n");


}
