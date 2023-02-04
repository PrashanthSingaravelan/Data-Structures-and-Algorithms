package dynamic_programming;

import java.util.Arrays;

public class recursive_memoization {
    
    static int arr1[] = new int[5];
    
    static int fib(int n) {
        if (n<=1)      /// n==0 return 0  (or) n==1 return 1
            return n;

// al-ready a term exists, don't traverse return the result        
        if (arr1[n]!=-1)    
            return arr1[n];

// new-term, compute and then add into the array        
        else {  
           arr1[n] = fib(n-1) + fib(n-2);
           System.out.println("Storing at index : " + n);
           return arr1[n];
        }
    }
    
    public static void main(String[] args) {
        int n = 5;
        arr1 = new int[n+1];  // for fib(5) -> required index 0,1,2,3,4,5
        Arrays.fill(arr1, -1);
        System.out.println(fib(n));
    }
}
