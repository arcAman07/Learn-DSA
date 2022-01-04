#include <stdio.h>
#include <stdlib.h>
struct Array{
  int A[20];
  int size;
  int length;
};
void Append(struct Array *arr,int element) // Appending the element to the absolute end of the array
{
  if(arr->size>arr->length)
  {
    arr->A[arr->length] = element;
    arr->length++;
  }
}
void Insert(struct Array *arr,int index,int element)
{
  if (index>=0 && index < arr->length)
  {
    int i;
    for (i=arr->length;i>=index;i--)
    {
      arr->A[i+1] = arr->A[i];
    }
    arr->A[index] = element;
    arr->length++;

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
  struct Array arr1 = {{2,3,4,5,6,7},20,6};
  Append(&arr,8);
  Display(arr);
  printf("\n");
  Insert(&arr1,0,1);
  Display(arr1);
  // 0 indicates the index number where the element needs to be inserted
  // 1 is the element to be inserted in that particular index number

}
