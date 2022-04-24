#include<stdio.h>
#include<stdlib.h>

struct Node {
  int data;
  struct Node *next;
}* first = NULL;

void create(int A[], int n)
{
  struct Node *last, *t;
  int i;
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

int sum(struct Node *p)
{
  int total = 0;
  if(p!=NULL)
  {
    return p->data + sum(p->next);
  }
  return 0;
}

int main()
{
  int A[] = {2,3,5,7,9,11};
  create(A,6);
  int total = sum(first);
  printf("The sum of all nodes is %d ",total);

  return 0;
}
