#include<iostream>   //Time complexity=O(n)
using namespace std;
double e(int x,int n)
{
	static double s=1;
	    if(n==0) return s;
	else 
	    s=1+(s/n*x);
	    return e(x,n-1);	
}
int main()
{
	int a,b;
	double c;
	cout<<"Enter the power and the number of terms : ";
	cin>>a>>b;
	c=e(a,b);
	cout<<"The answer is : "<<c;
	return 0;
}
