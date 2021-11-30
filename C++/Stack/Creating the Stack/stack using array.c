#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int size;   // size of the stack 
    int top;    // top pointer 
    int *S;     // array 
};

void Create(struct Stack *ptr)  {
    printf("Enter the size of your stack elements : ");
    scanf("%d",&ptr->size);
    ptr->top = -1;   // Initially top will be -1
    ptr->S   = (int*)malloc( (ptr->size)*sizeof(int) );  // dynamic array depending upon the user-input
}

void Push(struct Stack *ptr,int x)  {
    if(ptr->top == ptr->size-1) printf("Stack Overflow\n"); 
    else {
        ptr->top++;             // incrementing the top pointer
        ptr->S[ptr->top] = x;   // putting the elements into the stack
    }
}

int Pop(struct Stack *ptr) {
    int x=-1;
    if(ptr->top==-1) printf("Stack Underflow"); // stack has no elements to pop it out
    else {
        x = ptr->S[ptr->top];  // getting the top element from the array
        ptr->top--;    // decrementing the top pointer
    }
    return x;
}

void Display(struct Stack ptr)   {
    int i;
    for(i=ptr.top;i>=0;i--)    { printf("%d  ",ptr.S[i]);    }
    printf("\n");
}

int Peek(struct Stack ptr,int pos)  {
    int x = -1;  // To carry the popped element
    if(ptr.top-pos+1 < 0) printf("Invalid Index");
    else { x=ptr.S[ptr.top-pos+1];    }
    return x;
}

int main()  {
    struct Stack obj1;
    int element;

    Create(&obj1);
    printf("Enter the stack elements : ");

    for(int i=0;i<obj1.size;i++) {
        scanf("%d",&element);
        Push(&obj1,element);
    }

    // printf("Element at 3rd : %d\n",Peek(obj1,3));

    printf("Stack elements starting from the top pointer : ");
    Display(obj1);
    return 0;
}
