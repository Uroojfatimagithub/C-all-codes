#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,r1,r2,disc,real,imag;
	cout<<"enter first number:\n";
	cin>>a;
	cout<<"enter second number:\n";
	cin>>b;
	cout<<"enter third number:\n";
	cin>>c;
	disc=b*b-4*a*c;
	if(disc<0)
	{
		real=-b/(2.0*a);
		imag=(-disc)/(2.0*a);
		cout<<"roots are imaginary:\n";
		cout<<"root 1="<<real<<"+i("<<imag<<")"<<endl;
		cout<<"root 2 ="<<real<<"-i("<<imag<<")"<<endl;
	}
	if(disc==0)
	{
		r1=r2=-b/(2.0*a);
		cout<<"the roots are real and equal:\n";
		cout<<"root 1 ="<<r1<<endl;
		cout<<"root 2 ="<<r2<<endl;
	}
	if(disc>0)
	{
		cout<<"roots are real and different:\n";
		r1=-b/(2.0*a)+sqrt(disc)/(2.0*a);
		r2=-b/(2.0*a)-sqrt(disc)/(2.0*a);
		cout<<"Root 1 ="<<r1<<endl;
		cout<<"Root 2 ="<<r2<<endl;
	}
}
