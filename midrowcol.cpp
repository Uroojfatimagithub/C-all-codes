#include<iostream>
using namespace std;
void miidlerow(int a[7][7],int n);
void middlecolumn(int a[7][7],int n);
int main()
{
	int a[7][7];
	int s;
	cout<<"enter the size of array:\n";
	cin>>s;
	cout<<"enetr the elements of matrix:\n";
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cin>>a[i][j];
		}
	}
		for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the elements of middle row are:\n";
	miidlerow(a,s);
	cout<<"the elements of middle column are:\n";
	middlecolumn(a,s);
	return 0;
}

void miidlerow(int a[7][7],int n)
{
	int s;
		for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(i==s/2)
			cout<<a[i][j]<<" ";
}
}
}
void middlecolumn(int a[7][7],int n)
{
	int s;
		for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(j==s/2)
			cout<<a[i][j]<<" ";
}
}
}


