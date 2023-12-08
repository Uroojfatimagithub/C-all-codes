#include<iostream>
using namespace std;
void combine(char *res,char *s1,char *s2);
int main()
{
	char s1[20],s2[20],res[50];
	cout<<"enter string 1:\n";
	gets(s1);
	cout<<"enter second string:\n";
	gets(s2);
	combine(res,s1,s2);
	cout<<"the combination of two strings is"<<res;
	return 0;
}
void combine(char *res,char *s1,char *s2)
{
	while(*s1!='\0')
	*res++=*s1++;
	while(*s2!='\0')
	*res++=*s2++;
	*res='\0';
}
