#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"enter five numbers";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
		cout<<"unsorted arrays"<<endl;
			for(int i=0;i<5;i++)
		cout<<a[i]<<endl;
		int temp;
		for(int i=0;i<5;i++)
		{
			for(int j=i+1;j<5;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		cout<<"the sorted array elements in ascending order"<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<a[i]<<" ";
			}
	return 0;
}
	


	
