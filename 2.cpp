#include<iostream>
using namespace std;
struct data
{
	char name[15];
	int s1,s2,s3,s4;
};
int main()
{
	data st01={"mariam",34,67,55,23};
	int total;
	total=st01.s1+st01.s2+st01.s3+st01.s4;
	cout<<"the name of student is:\n"<<st01.name;
	cout<<"the marks in subject 1 is:\n"<<st01.s1;
	cout<<"the marks in subject 2 is:\n"<<st01.s2;
	cout<<"the marks in subject 3 is:\n"<<st01.s3;
	cout<<"the marks in subject 4 is:\n"<<st01.s4;
	cout<<"the total marks are:\n"<<total;
	return 0;
}
