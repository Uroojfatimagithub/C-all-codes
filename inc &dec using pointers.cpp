#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *pa;
	pa=&a;
	(*pa)++;
	cout<<"the increment value is"<<a<<endl;
	++(*pa);
	cout<<"the increment value using prefix is"<<a<<endl;
	--(*pa);
	cout<<"the decrement value using prefix is"<<a<<endl;
	(*pa)--;
	cout<<"the decrement value using postfix is"<<a<<endl;
	return 0;
}
