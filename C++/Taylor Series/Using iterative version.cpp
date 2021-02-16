#include<iostream> //Time complexity=O(n^2)
using namespace std;
double e(int x, int n)
{
double s=1;
int i;
double num=1;
double den=1;
for(i=1;i<=n;i++)
  {
    num=num*x;
    den=den*i;
    s=s+num/den;
  }
return s;
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
