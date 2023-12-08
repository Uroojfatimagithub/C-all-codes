#include<iostream>
using namespace std;
struct temp
{
	char name[15];
	int marks;
};
int main()
{
	temp func();
	temp xyz;
	xyz=func();
	cout<<"name ="<<xyz.name;
	cout<<"marks ="<<xyz.marks;
	return 0;
}
temp func()
{
	temp xyz;
	cout<<"enter the name:\n";
	cin>>xyz.name;
	cout<<"enter the marks:\n";
	cin>>xyz.marks;
	return(xyz);
}
