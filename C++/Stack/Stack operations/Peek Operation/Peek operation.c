#include<stdio.h>
#include<string.h>
#include "Stack.c"

int Peek(struct Stack *ptr) {
    int element;

    if (ptr->top==-1) {
        printf("No elements to peek");
    }
    else {
            element = ptr->S[ptr->top];
            ptr->top = ptr->top-1;
            printf("%d",element);
        }
}

int main()
{
    struct Stack obj1;
       
    Create(&obj1);
    printf("\nEnter the stack elements : ");

    int i,element;
    for(i=0;i<obj1.size;i++)
    {
        scanf("%d",&element);
        Push(&obj1,element);
    }
    printf("The stack elements from the top pointer : ");
    Display(obj1);

    printf("The peek element is : ");
    Peek(&obj1);
    
    return 0;
}