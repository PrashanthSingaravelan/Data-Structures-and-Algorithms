#include<stdio.h>

void Swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int *Selection_Sort(int arr1[], int n) {
    int i,j,k;
    for(i=0;i<n;i++) {
        for(j=k=i;j<n;j++) {
            if (arr1[j] < arr1[k]) {
                k=j;
            }
        }
        Swap(&arr1[i], &arr1[k]);
    }
    return arr1;
}

int main() {
    int arr1[] = {8,6,3,2,5,4};
    int n      = sizeof(arr1) / sizeof(arr1[0]);
    int *ans   = Selection_Sort(arr1, n);

    printf("Selection Sort\nSorted elements are : ");
    for(int i=0;i<n;i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
