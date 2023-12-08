#include<iostream>
using namespace std;
int main()
{
	int a[5],size=5;
	cout<<"enter a number:\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int num,found=0;
	cout<<"enter a number which you want to delete:\n";
	cin>>num;
	for(int i=0;i<size;i++)
	{
	if(a[i]==num)
	{
          	for(int j=i;j<size-1;j++)	{
		a[j]=a[j+1];
		found=1;
		i--;
		size--;
	}
}
}
	if(found==0)
	{
		cout<<"element does not match";
	}
	else
	{
		cout<<"element deleted successfully";
	cout<<"the new array is:\n";
	for(int i=0;i<size;i++)
		cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
