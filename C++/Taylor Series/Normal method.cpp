#include<iostream>     //Time complexity=O(n^2)
using namespace std;
double e(int x,int n)
{
	static double p=1,f=1;
	double r;
	if(n==0) return 1;
	else
	  {
	  	  r=e(x,n-1);
		  p*=x;
		  f*=n;
		  return r+p/f; 	
	  }	
}
int main()
{
	int t,s;
	double b;
	cout<<"Enter the power and number of terms : ";
	cin>>t>>s;
	b=e(t,s);
	cout<<"The answer is : "<<b;
	return 0;
}
	
	

