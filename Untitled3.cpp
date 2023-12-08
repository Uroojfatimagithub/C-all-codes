#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	cout<<"enter the string:\n";
	getline(cin,str);
	char ch;
	cout<<"enter a character to delete:\n";
	cin>>ch;
     str.erase(remove(str.begin(), str.end(), ch), str.end());
      cout<<"the string after deleting the character is:\n";
      cout<<str;
      return 0;
}
