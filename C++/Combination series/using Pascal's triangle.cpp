#include<iostream>
using namespace std;
int NCR(int n,int r)
{
	if(r==0 || n==r) return 1;
	else return NCR(n-1,r-1)+NCR(n-1,r);	
}
int main()
{
	int a,b,c;
	cout<<"Enter n and r value : ";
	cin>>a>>b;
	c=NCR(a,b);
	cout<<"Your answer is : "<<c;
	return 0;
}
