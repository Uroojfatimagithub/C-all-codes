#include<iostream>
using namespace std;
int main()
{
	float a[5][3]={3.2,4.4,6.5,1.2,3.22,7.6,8.7,9.8,9.0,4.5,2.2,3.3,2.4,5.7,4.5};
	float max=a[0][0];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	cout<<"the maximum number is "<<max;
	return 0;
	
}
