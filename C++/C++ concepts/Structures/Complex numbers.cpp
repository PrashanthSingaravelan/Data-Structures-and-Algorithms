#include<iostream>
using namespace std;
struct complex
{                       a(8 bytes)         b(8 bytes)           c          Total 24 bytes
	int real;          real               real                real
 	int imaginary;	 imaginary         imaginary   imaginary
}a,b,c;          //Instances of the structure variables
int main()
{
	cout<<"Enter the first complex number : ";
	cin>>a.real>>a.imaginary;
	cout<<endl<<"Enter the second complex number : ";
	cin>>b.real>>b.imaginary;
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;
	cout<<endl<<"The sum is : "<<c.real<<" +i "<<c.imaginary;
	return 0;	
}
	
