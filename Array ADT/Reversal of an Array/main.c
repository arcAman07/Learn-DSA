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
void Reverse(struct Array *arr)
{
  int *B;
  int i,j;
  B = (int *)malloc(arr->length*sizeof(int));
  for(i=arr->length-1,j=0;i>=0,j<arr->length;i--,j++)
  {
    B[j] = arr->A[i];
  }
  for(i=0;i<arr->length;i++)
  {
    arr->A[i] = B[i];
  }
}
int main()
{
  struct Array arr = {{2,3,4,5,6,7},20,6};
  printf("Initial array: ");
  printf("\n");
  Display(arr);
  printf("\n");
  printf("Array after reversal: ");
  printf("\n");
  Reverse(&arr);
  Display(arr);
  printf("\n");
  return 0;
}
