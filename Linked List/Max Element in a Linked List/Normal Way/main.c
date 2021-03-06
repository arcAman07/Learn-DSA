#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
}* first = NULL;

void create(int A[], int n)
{
  first = (struct Node *)malloc(sizeof(struct Node));
  int i;
  struct Node *t,*last;
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

int max(struct Node *p)
{
  int max = -32768;
  while(p!=NULL)
  {
    if (p->data > max)
    {
      max = p->data;
    }
    p = p->next;
  }
  return max;
}

int main()
{
  int A[] = {2,3,5,7,9,11};
  create(A,6);
  int maximum = max(first);
  printf("Max element in the linked list is %d ", maximum);
}
