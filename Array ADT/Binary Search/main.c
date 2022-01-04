#include <stdio.h>
#include <stdlib.h>
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
int BinarySearch(struct Array arr, int key)
{
  int l,mid,h;
  l=0;
  h=arr.length-1;
  while(l<=h)
  {
    mid = (l+h)/2;
    if (key == arr.A[mid])
    {
      return mid;
      break;
    }
    else if (key < arr.A[mid])
    {
      h = mid-1;
    }
    else {
      l = mid+1;
    }
  }
  return -1;

}
int main()
{
  struct Array arr = {{2,3,4,5,6,7},20,6};
  int key;
  printf("The array before binary search :");
  Display(arr);
  printf("\n");
  printf("Enter the element need to be searched ");
  scanf("%d",&key);
  int index = BinarySearch(arr,key);
  if (index == -1)
  {
    printf("Element not to be found ");
  }
  else {
    printf("Element was found in the %d position",index);
  }

  return 0;

}
