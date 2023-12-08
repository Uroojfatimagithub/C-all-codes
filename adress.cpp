#include<iostream>
using namespace std;
void printname(char name[15]);
void printadress(char adress[25]);
void printnumber(char phone[14]);
void printage(int age);
int main()
{
	char name[15],adress[25],phone[14];
	int  age;
	cout<<"enter the name"<<endl;
	cin>>name;
	cout<<"enter the age"<<endl;
	cin>>age;
	cout<<"enter the adress"<<endl;
	cin>>adress;
	cout<<"enter the phone number"<<endl;
	cin>>phone;
	    printname(name);
        printadress(adress);
        printnumber(phone);
        printage(age);
          return 0;
}
void printname(char name[15])
{
	cout<<"name ="<<name<<endl;
}
void printadress(char adress[25])
{
	cout<<"adress ="<<adress<<endl;
}
void printnumber(char phone[14])
{
	cout<<"number ="<<phone<<endl;
}
void printage(int age)
{
	cout<<"age ="<<age<<endl;
}

