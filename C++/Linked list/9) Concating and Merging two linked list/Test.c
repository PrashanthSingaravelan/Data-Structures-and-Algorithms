#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
}*first=NULL,*second=NULL,*third=NULL;

int main()
  {
      first->data=19;
      printf("%d ",first->data);  
  }
  
