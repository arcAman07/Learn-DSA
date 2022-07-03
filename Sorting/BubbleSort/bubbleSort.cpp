#include<iostream>
#include<string>
using namespace std;
void BubbleSort(int myNum[],int len)
{
  for(int i=0;i<len-1;i++)
  {
    int flag = 0;
    for(int j=0;j<len-i-1;j++)
    {
      if(myNum[j+1]<myNum[j])
      {
        int swap = myNum[j];
        myNum[j] = myNum[j+1];
        myNum[j+1] = swap;
        flag = 1;
      }
    }
    if(flag == 0)
    {
      break;
    }
  }
}
void displayArr(int num[], int len)
{
  for(int i=0;i<len;i++)
  {
    cout << num[i] << " ";
  }
  cout<<endl;
}
int main()
{
  int myNum[8] = {30,10,20,80,60,50,70,40};
  int a = sizeof(myNum) / sizeof(myNum[0]);
  // Need to make Bubble Sort:
  // 1) Adaptive : Should consume less time (minimum time) than normal when all the elements are already in a sorted order.
  // 2) Stable: Should preserve the order( relative position ) of elements which are equal in the same order as it was originally.
  cout<< "The original array is: ";
  displayArr(myNum,a);
  cout<<"The sorted array is: ";
  BubbleSort(myNum,a);
  displayArr(myNum,a);
  return 0;
}
