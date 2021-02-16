#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1) return n;
	else return fib(n-2)+fib(n-1); // Time complexity=O(2^n)	
}
int main()
{
	int a,b;
	cout<<"Enter the required term : ";
	cin>>a;
	b=fib(a);
	cout<<b;
	return 0;	
}
