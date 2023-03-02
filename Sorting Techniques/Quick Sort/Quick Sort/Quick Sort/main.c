#include<stdio.h>

void Swap(int* x, int* y ){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partitioning_position(int arr1[], int l, int h)   {
    
    int pivot_element = arr1[l];
    int i=l;
    int j=h;
    
    do {
        do{i++;} while (arr1[i] <= pivot_element);
        do{j--;} while (arr1[j] > pivot_element);
        //printf("\nSwapping elements arr1[i] = %d arr1[j] = %d", arr1[i], arr1[j]);
        if (j>i) Swap(&arr1[i], &arr1[j]);
    } while (i<j);
    
    Swap(&arr1[l], &arr1[j]);
    
//     j is the partition_position
    return j;
}

void Quick_Sort(int arr1[], int l, int h)   {
    int partition_position;
    if (l<h) {
        partition_position = partitioning_position(arr1, l, h);
        Quick_Sort(arr1, l, partition_position);
        Quick_Sort(arr1, partition_position + 1, h);
    }
}

int main()   {
    int arr1[] = {50, 70, 60, 90, 40, 80, 10, 20, 30, INT32_MAX};
    int n      = sizeof(arr1) / sizeof(arr1[0]);
    Quick_Sort(arr1, 0, n-1);
    
    for(int i=0;i<n-1;i++) {
        printf("%d  ", arr1[i]);
    }
    
    return 0;
}
