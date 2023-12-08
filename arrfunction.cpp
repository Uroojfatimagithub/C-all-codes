#include<iostream>
using namespace std;
int sum(int a[6],int size);
int main()
{
	int a[6],size;
	cout<<"enter the size of array:\n";
	cin>>size;
	cout<<"enter the array elements:\n";
	int i;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int c=sum(a,size);
	cout<<"the sum of all elements of matrix is:\n"<<c;
	return 0;
}
int sum(int a[6],int size)
{
	int add=0;
		for(int i=0;i<size;i++){
	add+=a[i];
	}
	return add;
}

