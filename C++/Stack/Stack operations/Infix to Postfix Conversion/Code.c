#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    char data;
    struct Node*next;
}*top=NULL;

void push(char x)
    {
      struct Node*t=(struct Node*)malloc(sizeof(struct Node));
      if(t==NULL) printf("Stack is not created");
      else
      {
          t->data=x;
          t->next=top;
          top=t;
      }
    }

char pop()
          {
             struct Node*t;
             char x=-1;
             if(top=NULL) { printf("Stack is empty"); }
             else
               {
                 t=top;
                 top=top->next;
                 x=t->data;
                 free(t);
               }
              return x;
          }
int isoperand(char x) // Returns True(i.e 1) if it is an operand
    {
        if(x=='+' || x=='-' || x=='*' || x=='/')  { return 0; }
        else { return 1; }
    }

int precedence(char x)
            {
               if(x=='+' || x=='-') return 1;
               else if(x=='*' || x=='/') return 2;
               return 0;
            }

char *Infix_to_Postfix(char *infix)
   {
     int i=0,j=0;
     int len=strlen(infix); // Since infix and postfix should have the same array length in heap
     char *postfix=(char*)malloc((len+2)*sizeof(char)); // len+1 => To include NULL character

     while(infix[i]!='\0')
     {
         if(isoperand(infix[i])) //isoperand() returns True if it is an Operand
         {
             postfix[j++]=infix[i++];  // if it is an Operand push it to postfix
         }

         else // Then it must be an operator, So before entering that operator into the stack we must check the precedence
         {
             if( precedence(infix[i]) > precedence(top->data) ) // Initially top->data is NULL
             {                                                 // So it might get error
                 push(infix[i++]);
             }
             else
             {
                 postfix[j++]=pop();
             }
         }
     }

     while(top!=NULL)
     {
         postfix[j++]=pop();
     }
     postfix[j]='\0';  // Since postfix is also a string its last character should be '\0'
     return postfix;
   }


int main()
{
    char *infix="a+b*c-d/e";
    push('#');

    char *postfix=Infix_to_Postfix(infix);

    printf("%s",postfix);
    return 0;
}

