#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *ptr;
    int length;
    int size;
};

void Display(struct Array obj)
  {
      int i=0;
      printf("The elements of the array are : ");
      for(i=0;i<obj.length;i++)
        printf("%d",obj.ptr[i]);
  }
int main()
{
    int i,n;
    struct Array obj;
    printf("Enter the length of an array : ");
    scanf("%d",&obj.length);

    obj.ptr=(int*)malloc(obj.length*sizeof(int));
    printf("Enter the array elements : ");
    for(i=0;i<obj.length;i++)
        {
          scanf("%d",&obj.ptr[i]);
        }
    Display(obj);




}
