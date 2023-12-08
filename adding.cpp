#include<iostream>
using namespace std;
int func(int a[10]);
int main()
{
	int a[10];
	cout<<"enter ten elements:\n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
    int odd=func(a);
    cout<<"the sum of odd numbers are"<<odd;
}
int func(int a[10])
{
	int i,sum=0;
	cout<<"even numbers are:\n";
	for(i=0;i<10;i++){
	if(a[i]%2==0)
		cout<<a[i]<<" ";}
	for(int i=0;i<10;i++)
	{
		if(a[i]%2!=0)
		sum+=a[i];
	}
	return sum;
	
}
