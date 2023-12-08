#include<iostream>
using namespace std;
void copying(char *s2,char *s1);
int main()
{
	char s1[15],s2[15];
	cout<<"enter string 1:\n";
	gets(s1);
	copying(s2,s1);
		cout<<"the first string is"<<s1;
	cout<<"the second string is"<<s2;
	return 0;
}
void copying(char *s2,char *s1)
{
	while(*s1!='\0')
	*s2++=*s1++;
	*s2='\0';
}

