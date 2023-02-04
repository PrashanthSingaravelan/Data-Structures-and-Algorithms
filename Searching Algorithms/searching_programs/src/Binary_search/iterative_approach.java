package Binary_search;

import java.lang.Math;
import java.util.Arrays;

public class iterative_approach {
    
    static boolean binary_iterative(int arr1[], int element) {
    
    int low    = 0;
    int high   = arr1.length - 1;    
        
    while (low <= high) {
        int middle = (int) Math.ceil((low + high) / 2);
        
        if (arr1[middle] == element)
            return true;
        
        else if ((arr1[middle]) < element)   
            low = middle + 1;
        
        else if ((arr1[middle]) > element)   
            high = middle - 1;
        }
      return false;  
}
    
    public static void main(String[] args) {
       int arr1[] = new int[] {45, 16, 18, 23, 15, 54, 90, 100, 24, 10};
        Arrays.sort(arr1);
        System.out.println(binary_iterative(arr1, 101));  
    }
}
