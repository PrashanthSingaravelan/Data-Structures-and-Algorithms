#include<iostream>      // Time complexity = O(log n)
using namespace std;
int pow(int n,int m)
  {
  	if(n==0) return 1;                    // Anything power 0 is 1
  	else if (n%2==0) return pow(m*m,n/2);
  	else return m*pow(m*m,(n-1)/2);  	
  }
int main()
   {
   	int a,b;
   	cout<<"Enter a number and its power term : ";
   	cin>>a>>b;
   	cout<<"The answer for "<<a<<"^"<<b<<" is : "<<pow(a,b);
   	return  0;   	
   }
 	

