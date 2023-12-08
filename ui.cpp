#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char st[]=" ";
	for(int i=0;i<=3;i++)
	{
		strncat(st,"pakistan",i);
	    cout<<st<<endl;
	    strcpy(st," ");
	}
	return 0;
}
