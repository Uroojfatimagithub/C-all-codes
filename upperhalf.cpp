#include<iostream>
using namespace std;
void upper_half(int a[][5], int);

int main()
{
    int s;
    int a[5][5];

    cout<<"enter size of square matrix:\n";
    cin>>s;
    cout<<"enetr elements of matrix:\n";
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
    		cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<"the upper half of triangular matrix is:\n";
    upper_half(a, s);

    return 0;
}
void upper_half(int a[][5], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                cout<<"\t"<<a[i][j];
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
}

