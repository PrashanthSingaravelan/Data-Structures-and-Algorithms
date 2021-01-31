#include<stdio.h>

struct Array
 {
     int A[10];
     int size;
     int length;
 };

 void Swap(int *x,int *y)
   {
       int *temp=*x;
       *x=*y;
       *y=*temp;
   }

int Normal_Linear_Search(struct Array ptr,int key) // Not modifying the original array,so normal obj
  {
      int i;
      for(i=0;i<ptr.length;i++)
           {
             if(key==ptr.A[i])
                return i;
           }
      return -1;
  }

int Transposition(struct Array *ptr,int key) // Modifying the original array,so pointer obj
  {
      int i;
      for(i=0;i<ptr->length;i++)
           {
             if(key==ptr->A[i])
             {
                Swap(&ptr->A[i],&ptr->A[i-1]);
                return i;
             }
           }
             return -1;
  }

int Movetofront(struct Array *ptr,int key) // Modifying the original array,so pointer obj
  {
      int i;
      for(i=0;i<ptr->length;i++)
           {
             if(key==ptr->A[i])
             {
                Swap(&ptr->A[i],&ptr->A[0]);
                return i;
             }
           }
             return -1;
  }

void Display(struct Array *ptr)
  {
      int i;
      for(i=0;i<ptr->length;i++)
      {
          printf("%d",ptr->A[i]);
      }
  }

int main()
{
 struct Array obj={{2,23,14,5,6,9,8,12},10,11};  // arr={2,23,14,5,6,9,8,12}
                                                // size = 10
                                                // length =11

 //printf("Normal Search at : %d\n",Normal_Linear_Search(obj,10));
 //printf("Transposition : %d \n",Transposition(&obj,6));

 printf("MoveTofront : %d \n",MoveTofront(&obj,6));


 //Display(ptr);
 return 0;
}
