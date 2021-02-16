#include<iostream>
#include<stdlib.h>
using namespace std;

// Recursive function to print the pattern. 
// n indicates input value 
// m indicates current value to be printed 
// flag indicates whether we need to add 5 or 
// subtract 5.  Initially flag is true. 
void printPattern(int n, int m, bool flag) 
{ 
    // Print m. 
    cout << m << " "; 
     
    // If we are moving back toward the n and 
    // we have reached there, then we are done 
    if (flag == false && n ==m) 
        return;   
     
    // If we are moving toward 0 or negative. 
    if (flag) 
    { 
      // If m is greater, then 5, recur with true flag 
      if (m-5 > 0)  
         printPattern(n, m-5, true); 
      else // recur with false flag 
         printPattern(n, m-5, false); 
    } 
    else // If flag is false. 
         printPattern(n, m+5, false); 
} 
  
// Driver Program 
int main() 
{ 
     int n = 16; 
     printPattern(n, n, true); 
    return 0; 
} 
