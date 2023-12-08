#include<iostream>
using namespace std;
int main()
{
    char str[20];
    char *pt;
    cout<<"enter the string:\n";
    cin>>str;
    for(pt=str;*pt!='\0';pt++)
    {
    	cout<<*pt;
	}
	return 0;
}
