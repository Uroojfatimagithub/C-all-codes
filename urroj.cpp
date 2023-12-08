#include <iostream>
using namespace std;
void most_repeated(int arr[3][4]);
int main()
{
	int arr[3][4];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		cout<<"enter number"<<endl;
		cin>>arr[i][j];}
	}
	cout<<"original numbers:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
		cout<<arr[i][j];
		cout<<endl;}
	}
	most_repeated(arr);
	return 0;
}
void most_repeated(int arr[3][4])
{
	

    int count[3][4] ={0};
    int j;
    for (int i = 0; i <3; i++) {
        for(j=0;j<4;j++){
		count[arr[i][j]]++;
		}
    }

    int maxcount = 0;
    int mostfrequentnumber = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for(j=0;j<4;j++){
		if (count[i][j] > maxcount) {
            maxcount = count[i][j];
            mostfrequentnumber = i;
        }
    }
    }

    cout<<"the most repeated number is"<<mostfrequentnumber;
}
	
	





	
	
	
	
	
	
	
