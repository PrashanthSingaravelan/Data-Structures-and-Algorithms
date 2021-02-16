#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node   {         // Creating a node
    int data;
    struct Node *next;    
}*top = NULL;

void Push(int element) {
    struct Node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = element;
    ptr->next = top;   // intially top is NULL
    top = ptr;
}

int Pop() {
    struct Node *ptr;
    int element = 0;

    if (top==NULL) {
        printf("Stack is empty");
    } 
    else {
        ptr = top;
        top = top->next;
        element = ptr->data;
        free(ptr);
    }
    return element;
}

void Display() {
    struct Node *ptr;
    ptr = top;
    while(ptr!=NULL) {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(40);
    Push(50);

    Display();
    
    Pop();
    Pop();
    
    return 0;
}