#include<iostream>
using namespace std;
void func(string name);
int main()
{
	string name;
	cout<<"Enter the string :\n";
	cin>>name;
	func(name);
	return 0;
}
void func(string name)
{
	int count=0;
	for(int i=0;name[i]!='\0';i++)
	{
		count++;
	}
	cout<<"the length of the string is"<<count;
}
