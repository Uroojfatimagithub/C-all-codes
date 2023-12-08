#include<iostream>
using namespace std;
struct adress
{
	char city[15];
	int pcode;
};
int main()
{
	adress tag;
	cout<<"enter the city:\n";
	cin>>tag.city;
	cout<<"enter the postal code:\n";
	cin>>tag.pcode;
	cout<<"output from structure:\n";
	cout<<"city:     "<<tag.city<<endl;
	cout<<"postal code:     "<<tag.pcode<<endl;
	return 0;
}
