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
    ptr->top=-1;
    ptr->S=(int*)malloc( (ptr->size)*sizeof(int) );
}

void Display(struct Stack ptr)
{
    int i;
    for(i=ptr.top;i>=0;i--)
    {
        printf("%d",ptr.S[i]);
        printf("\n");
    }
}

void Push(struct Stack *ptr,int x)
     {
        if(ptr->top==ptr->size-1) printf("Stack Overflow\n");
        else
        {
            ptr->top++;
            ptr->S[ptr->top]=x;
        }
     }

int Pop(struct Stack *ptr)
{
    int x=-1;
    if(ptr->top==-1) {printf("Stack Underflow");}
    else
    {
        x=ptr->S[ptr->top];
        ptr->top--;
    }
return x;
}

int Peek(struct Stack ptr,int pos)
{
    int x=-1;  // To carry the popped element
    if(ptr.top-pos+1 < 0) printf("Invalid Index");
    else
    {
        x=ptr.S[ptr.top-pos+1];
    }
    return x;
}



int main()
{
    struct Stack obj1;
    Create(&obj1);

    Push(&obj1,10);
    Push(&obj1,20);  //   Stack        latest => 40 => First added
    Push(&obj1,30); //   40,30,20,10   Old    => 10 => Last added
    Push(&obj1,40); //

    printf("Element at 3rd : %d\n",Peek(obj1,3));

    printf("The Rest of the elements : \n");
    Display(obj1);
}
