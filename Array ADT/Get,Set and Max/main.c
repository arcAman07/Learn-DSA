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
int Get(struct Array arr, int index)
{
  if (index >= 0 && index<arr.length)
  {
    return arr.A[index];
  }
  else {
    return -1;
  }
}
void Set(struct Array *arr, int index, int key)
{
  if (index>=0 && index<arr->length)
  {
    arr->A[index] = key;
  }
  else {
    printf("Index out of range!");
  }
}
int Max(struct Array arr)
{
  int max = arr.A[0];
  int i;
  for(i=0;i<arr.length;i++)
  {
    if (arr.A[i]>max)
    {
      max = arr.A[i];
    }
  }
  return max;
}
int main()
{
  struct Array arr = {{2,3,4,5,6,7},20,6};
  printf("The initial array :");
  Display(arr);
  printf("\n");
  printf("Getting an element from a particular index from the array: ");
  printf("\n");
  printf("%d",Get(arr,1));
  printf("\n");
  printf("Setting an element on a particular index inthe array: ");
  Set(&arr,0,1);
  Display(arr);
  printf("\n");
  printf("Getting the Maximum element in the array: ");
  printf("%d",Max(arr));
  return 0;

}
