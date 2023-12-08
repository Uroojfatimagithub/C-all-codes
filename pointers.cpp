#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
	int a,b;
	cout<<"enter the two values:\n";
	cin>>a>>b;
	cout<<"values before swapping:\n";
	cout<<"value of first is"<<a<<endl<<"value of second number is"<<b<<endl;
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"values after swapping"<<endl;
	cout<<"value of first number"<<*a<<endl;
	cout<<"value of second number"<<*b<<endl;
}
	
