#include<iostream>
using namespace std;
int main()
{
	int *a,*b;
	int n1,n2;
	cout<<"enetr two numbers:\n";
	cin>>n1>>n2;
	int sum=0;
	a=&n1;
	b=&n2;
	sum=*a+*b;
	cout<<"the sum of two numbers using pointers is"<<sum<<endl;
	return 0;
}
