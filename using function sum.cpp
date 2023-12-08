#include<iostream>
using namespace std;
void sum(int *a,int *b,int *result);
int main()
{
	int a,b;
	int add=0;
	cout<<"enter two numbers:\n";
	cin>>a>>b;
	sum(&a,&b,&add);
	return 0;
}
void sum(int *a,int *b,int *result)
{
	*result=*a+*b;
	cout<<"the addition is"<<*result<<endl;
}
