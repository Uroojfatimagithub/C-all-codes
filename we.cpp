#include <iostream>
using namespace std;
int reversed(int num);
int main()
{
	int num;
	cout<<"enter a number:\n";
	cin>>num;
	int c=reversed(num);
	cout<<"the reversed number is ="<<c;
	return 0;
}
int reversed(int num)
{
	int reversednum=0;
	while(num>0)
	{
		int digit=num%10;
		reversednum=reversednum*10+digit;
		num=num/10;
	}
	return reversednum;
}
