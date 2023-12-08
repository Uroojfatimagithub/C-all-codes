#include<iostream>
using namespace std;
int main()
{
    int arr[5], i, num, pos, size=5;
    cout<<"Enter "<<size<<" Array Elements: ";
    for(i=0; i<size; i++)
        
		cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";
    cin>>num;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=size; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = num;
    size++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<size; i++)
        
		cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
