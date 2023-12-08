#include<iostream>
using namespace std;
int main()
{
	char str[20];
	char *pt;
	int vowel=0,stringlength=0;
	cout<<"enter a string:\n";
	cin>>str;
	for(pt=str;*pt!='\0';pt++)
	{
		 if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
		vowel++;
		stringlength++;
	}
	cout<<"the length of string:"<<stringlength<<endl;
	cout<<"the length of vowels is"<<vowel<<endl;
	cout<<"the length of consonants is"<<(stringlength-vowel);
	return 0;
}
