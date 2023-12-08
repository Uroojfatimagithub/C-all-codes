#include <iostream>
using namespace std;
void matrix(int m,int n);
void transpose(int m,int n);
int main()
{
	int m,n;
	cout<<"enter number of rows:\n";
	cin>>m;
	cout<<"enter number of columns:\n";
	cin>>n;
	int i,j;
   matrix(m,n);
   return 0;
}
void matrix(int m,int n)
{
	int A[m][n],B[m][n];
		for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<"enter number"<<i<<j<<endl;
			cin>>A[i][j];
			cout<<" ";
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	int sum=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=sum+A[i][j];
		}
	   }   
	   cout<<"the sum of the all the elements of matrix are"<<sum;
           cout << "The row-wise sum of elements in the matrix is: " << endl;
  for (int i = 0; i < m; i++) {
    int row_sum = 0;
    for (int j = 0; j < n; j++) {
      row_sum+=A[i][j];
    }
    cout << "Sum of row " << i + 1 << ": " << row_sum << endl;
  }
  cout<<"the column wise sum of elements of matrix are:\n";
  	int column_sum=0;
  for(int j=0;j<n;j++)
  {
  	for(int i=0;i<m;i++)
  	{
  		column_sum+=A[i][j];
	  }
	  cout<<"the sum of column"<<j+1<<"is"<<column_sum<<endl;
}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			B[j][i]=A[i][j];
		}
	}
	cout<<"the transpose of matrix"<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	
}




 





	
