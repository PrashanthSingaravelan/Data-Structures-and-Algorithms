#include<stdio.h>

void Insert(int element,int index,int A[6])
  {
      int i;
      int len=sizeof(A);
      if(index>len) printf("Not possible");
      else
      {
        printf("Possible");

        for(i=len;i>index;i--)
        {
          A[i]=A[i-1];
        }
        A[index]=element;
        len++;

             for(i=0;i<len;i++)
                { printf("%d",A[i]);}

      }
}


int main()
{
    int element,index;
    int A[6]={1,2,3,4,5};
    printf("Enter an element : ");
    scanf("%d",&element);
    printf("Enter the index position : ");
    scanf("%d",&index);
    Insert(element,index,A[6]);
    return 0;
}
