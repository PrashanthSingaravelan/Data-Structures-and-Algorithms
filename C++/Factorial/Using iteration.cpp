#include<iostream>
using namespace std;
int fact(int n)
{
	int f=1;   // 0!=1 and 1!=1
	for(int i=1;i<=n;i++)
	 {
	 	f=f*i;	 	
	 }
	return f;
}
int main()
{
	int a,b;
	cout<<"Enter a number : ";
	cin>>a;
	b=fact(a);
	cout<<"The factorial of "<<a<<" is : "<<b;
	return 0;	
}
