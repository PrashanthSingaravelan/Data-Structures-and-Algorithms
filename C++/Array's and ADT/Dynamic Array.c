#include<stdio.h>
struct Array
{
    int ptr[10];
    int length;
    int size;
};

void Display(struct Array obj)
  {
      int i=0;
      printf("The elements of the array are : ");
      for(i=0;i<obj.length;i++)
        printf("%d  ",obj.ptr[i]);
  }
int main()
{
    struct Array obj={{100,101,102,103,104},10,5};
    Display(obj);
}

