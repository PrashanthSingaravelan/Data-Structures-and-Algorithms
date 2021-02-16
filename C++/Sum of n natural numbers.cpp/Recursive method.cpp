#include<iostream>
using namespace std;
int sum(int n)
  {
  	if(n==0) return 0;
  	else
  	  return sum(n-1)+n;  	
  }
int main()
{
	int a,b;
	cout<<"Enter the nth term : ";
	cin>>a;
	b=sum(a);
	cout<<"The sum is : "<<b;
	return 0;	
}
