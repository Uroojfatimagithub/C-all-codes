#include<iostream>
using namespace std;
struct xyz
{
	char name[15];
	int age;
};
void func(xyz s1)
{
	cout<<"name   ="<<s1.name<<endl;
	cout<<"age    ="<<s1.age<<endl;
}
int main()
{
    xyz s1;
	cout<<"enter the name :\n";
	cin>>s1.name;
	cout<<"enter the age:\n";
	cin>>s1.age;
	func(s1);
	return 0;	
}
