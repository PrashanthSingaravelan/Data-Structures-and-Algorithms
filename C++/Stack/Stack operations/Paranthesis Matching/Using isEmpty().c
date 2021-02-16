#include<stdio.h>
#include<stdlib.h>
struct Node
{
    char data;
    struct Node *next;
}*top=NULL;

void Push(char x)
{
    struct Node*t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL) printf("Stack Is full ");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

char Pop()
{
    char x=-1;
    struct Node*t;
    if(top==NULL) printf("Stack is Empty");
    else
        {
          t=top;
          top=top->next;
          x=t->data;
          free(t);
       }
   return x;
}
int IsEmpty()
{
    if(top==NULL) return 0; // No Node is created
    else return 1;       // Node is created
}
int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
        {
          if( exp[i]=='(' ) Push(exp[i]);
          else if( exp[i]==')' )
            {
               if(top==NULL) return 0; // While poping check if any elements are already inside the stack
               else Pop();             // If it is not there we cannot able to pop it
            }
        }
    // Now checking whether any elements are there in the stack
  if(top==NULL) {return 1;}
  else {return 0;}
}


int main()
{
  char *exp="((a+b)*(c-d))";
  printf("%d",isBalanced(exp));
  return 0;
}


