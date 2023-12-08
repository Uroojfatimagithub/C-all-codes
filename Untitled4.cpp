#include<iostream>
using namespace std;
int main()
{
	int r=3,c=4;
	int a[r][c];
	int i=0,j=0;
	cout<<"enter 12 numbers:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	int max=a[0][0];
	int max_row=0;
	int max_column=0;
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>max){
				max=a[i][j];
				max_row=i;
				max_column=j;
			}
		}
	}
	cout<<"the maximum value in the array is"<<max;
	cout<<"the location is: (row_location)"<<max_row<<endl;
	cout<<"(column_location)"<<max_column<<endl;
	return 0;
}
