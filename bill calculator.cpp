#include<iostream>
using namespace std;
int main()
{
	float cr,pr,units,bill;
	cout<<"enter the current readings:\n";
	cin>>cr;
	cout<<"enter the previous readings:\n";
	cin>>pr;
	units=cr-pr;
	if(units<=300)
	{
		bill=units*3.0;
		cout<<"the bill is"<<bill;
	}
	else if(units>300)
	{
		bill=units*3.5+units*0.05/100.0;
		cout<<"the bill is"<<bill;
	}
	return 0;
}
