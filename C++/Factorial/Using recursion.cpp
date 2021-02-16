#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
        return 1;
    else
        return fact(n-1)*n;	
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
