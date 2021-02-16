#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

void Create(struct Stack *ptr)
{
    printf("Enter the size of your stack elements : ");
    scanf("%d",&ptr->size);
    ptr->top = -1;   // Initially top will be -1
    ptr->S = (int*)malloc( (ptr->size)*sizeof(int) );  // dynamic array depending upon the user-input
} 

void Push(struct Stack *ptr,int element) {
    if (ptr->top == ptr->size-1) {
        printf("Stack is full");
    }
    else {
    	ptr->top++;
        ptr->S[ptr->top] = element;
    }
}

int Pop(struct Stack *ptr) {
    int element;
    if (ptr->top == -1) {
        printf("Stack is empty");
    }
    else {
        element = ptr->S[ptr->top];
        ptr->top = ptr->top-1;
    }
    return element;
}

void Display(struct Stack ptr)   {
    int i;
    for(i=ptr.top;i>=0;i--) {
        printf("%d  ",ptr.S[i]);
    }
    printf("\n");
}

