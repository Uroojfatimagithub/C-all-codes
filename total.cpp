#include<iostream>
using namespace std;
struct rec
{
	char name[15];
	int sub[4];
	int total;
};
int main()
{
    rec result;
	int total;
	cout<<"enter the name of student"<<endl;
	cin>>result.name;
	for(int i=0;i<4;i++)
	{
		cout<<"enter the marks of student "<<i+1<<endl;
		cin>>result.sub[i];
		}	
		result.total=result.sub[0]+result.sub[1]+result.sub[2],+result.sub[3];
		cout<<"the name of student is"<<result.name<<endl;
		for(int i=0;i<4;i++)
		{
			cout<<"the marks in subject "<<i+1<<"is  "<<result.sub[i]<<endl;
		}
		cout<<"the sum of all the subject marks is"<<result.total;
		return 0;
}
