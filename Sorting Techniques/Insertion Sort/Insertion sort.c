#include<stdio.h>
#include<conio.h>

void Insertion_Sort(int A[],int n)
{
    int i,j,element;
    for(i=1;i<n;i++)  // For passes
    {
        element=A[i];  // taking the last element
        j=i-1;
        
        while(j>-1 && A[j]>element)  // If true swapping takes place
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = element;  // After shifting, element must be placed in their position
    }
}

void Display(int A[],int n) {
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main() {
    int A[]={30,20,1,28,21,45,10,2,9};
    int n=9;
    
    printf("Array before sorting : ");
    Display(A,n);

    Insertion_Sort(A,n);
    
    printf("Array after sorting : ");
    Display(A,n);

    return 0;
}