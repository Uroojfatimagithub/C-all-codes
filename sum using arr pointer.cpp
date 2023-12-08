#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int *pt;
	int i=0,sum=0;
	pt=&a[0];
	cout<<"enter five array elemnets:\n";
	for(i=0;i<5;i++)
	{
		cin>>*pt;
		pt++;
	}
	cout<<"displaying array using pointers:\n";
	pt=&a[0];
		for(i=0;i<5;i++)
	{
		cout<<*pt;
	    sum+=*pt;
    	pt++;
}
cout<<"the sum is"<<sum;
return 0;
}
