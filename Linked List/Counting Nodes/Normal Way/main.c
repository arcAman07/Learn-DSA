#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
}* first = NULL;
void create(int A[], int n)
{
  int i;
  struct Node *last,*t;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;
  for(i=1;i<n;i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
int count(struct Node *p)
{
  int count = 0;
  while(p!=NULL)
  {
    count += 1;
    p = p->next;
  }
  return count;
}
int main()
{
  int A[] = {2,3,5,7,9,11};
  create(A,6);
  int a = count(first);
  printf("The total number of elements are %d ",a);
}
