#include<iostream>
using namespace std;
int fib(int n)     // Time complexity=O(n)
{
int sum=0,t0=0,t1=1;
	if(n<=1) return n;
	else 
		for(int i=2;i<=n;i++)
		{
			sum=t0+t1;
			t0=t1;
			t1=sum;			
		}
	return sum;	
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
