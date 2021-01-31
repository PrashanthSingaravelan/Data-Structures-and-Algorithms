#include<stdio.h>

struct Node
{
    int data;
    struct Node*next;
}*first=NULL;

void Create(int A[],int n)
 {
     int i;
     struct Node*t,*last;
     first=(struct Node*)malloc(sizeof(struct Node));
     first->data=A[i];
     first->next=NULL;
     last=first;

     for(i=1;i<n;i++)
     {
         t=(struct Node*)malloc(sizeof(struct Node));
         t->data=A[i];
         t->next=NULL;
         last->next=t;
         last=t;
     }
 }

void Display(struct Node*ptr)
 {
     while(ptr!=NULL)
     {
         printf("%d  ",ptr->data);
         ptr=ptr->next;
     }
 }

 int Count(struct Node*ptr)
    {
       int count=0;
       while(ptr!=NULL)
       {
           count++;
           ptr=ptr->next;
       }
       return count;
    }

// Copyt the elements in an array and then copy all the elements from the array in the reverse order
 void Reverse_by_elements(struct Node*ptr)
 {
     struct Node*qtr=ptr; // To help ptr to point to first again
     int i=0;
     int *A=(int*)malloc(sizeof(int)*Count(ptr));
     // Copy all the elements to the array from the nodes
	 while(ptr!=NULL)
     {
         A[i++]=ptr->data;
         ptr=ptr->next;
     }
     ptr=qtr;  // Bring the ptr again to the first
     i--;
       // Copy the elements from the array to the nodes
          while(ptr!=NULL)
           {
              ptr->data=A[i--];
              ptr=ptr->next;
           }
 }

 void Reverse_by_links(struct Node*ptr)
   {
       struct Node*qtr=NULL,*rtr=NULL;
       while(ptr!=NULL)
         {
           rtr=qtr;
           qtr=ptr;
           ptr=ptr->next;

           qtr->next=rtr;
         }
         first=qtr;
   }

void RecursiveReverse(struct Node*q,struct Node*p)
  {
      if(p!=NULL)
      {
          RecursiveReverse(p,p->next);
          p->next=q;
      }
      else { first=q;}
  }



int main()
{
    int A[5]={1,2,3,4,5};
    Create(A,5);

    printf("Before Reversing : ");
    Display(first);

    Reverse_by_elements(first);
    printf("\nAfter Reversing by elements : ");
    Display(first);

    Reverse_by_links(first);
    printf("\nAfter Reversing by links : ");
    Display(first);

    RecursiveReverse(NULL,first);
    printf("\nAfter Reversing by Recursion : ");
    Display(first);
}

