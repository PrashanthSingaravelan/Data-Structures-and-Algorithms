#include<iostream>   // Time Complexity=O(n)   It makes n mutiplications i.e 2^9 it makes 9 multiplications
using namespace std;
int pow(int m,int n)
  {
  	if(n==0) return 1;
  	else return pow(m,n-1)*m;  	
  }
   int main()
   {
   	int a,b;
   	cout<<"Enter a number and its power term : ";
   	cin>>a>>b;
   	cout<<"The answer for "<<a<<"^"<<b<<" is : "<<pow(a,b);
   	return  0;   	
   }
