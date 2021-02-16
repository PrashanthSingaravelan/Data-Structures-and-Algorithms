#include<iostream>               // nCr=n!/[r!*(n-r)!]
using namespace std;             
        int fact(int n)
        {
	        if(n==0) return 1;
            else return fact(n-1)*n;	
        }
             int nCr(int n,int r)
              {
                int numerator,denominator;
                numerator=fact(n);
                denominator=fact(r)*fact(n-r);
                return numerator/denominator;
              }
           
int main()
{
	int a,b,c,t1,t2,t3;
	cout<<"Enter n and r value : ";
	cin>>a>>b;
	c=nCr(a,b);
	cout<<"The answer is : "<<c;
	return 0;
}

