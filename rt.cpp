#include<iostream>
using namespace std;
struct data
{
	char name[15];
	int marks;
	char city[25];
};
int main()
{
   data arr[10];
   for(int i=0;i<10;i++)
   {
   	cout<<"input record"<<i+1<<endl;
   	cout<<"enter the name"<<endl;
   	cin>>arr[i].name;
   	cout<<"enter the marks"<<endl;
   	cin>>arr[i].marks;
   	cout<<"enter the city"<<endl;
	cin>>arr[i].city;   
    }
		  for(int i=0;i<10;i++)
   {
   	cout<<"output of"<<i+1<<endl;
   	cout<<arr[i].name<<endl;
   	cout<<arr[i].marks<<endl;
	cout<<arr[i].city<<endl;   
    }
}
