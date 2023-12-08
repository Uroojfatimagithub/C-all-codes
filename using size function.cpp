#include<iostream>
using namespace std;
int main()
{
	int a=5,*pa;
	char b='w',*pb;
	float c=9.8,*pc;
	long d=78,*pd;
	short e=45,*pe;
	cout<<"size of int data type is"<<sizeof(a)<<endl<<sizeof(*pa)<<endl;
		cout<<"size of character data type is"<<sizeof(b)<<endl<<sizeof(*pb)<<endl;
			cout<<"size of float data type is"<<sizeof(c)<<endl<<sizeof(*pc)<<endl;
	cout<<"size of long data type is"<<sizeof(d)<<endl<<sizeof(*pd)<<endl;
		cout<<"size of short data type is"<<sizeof(e)<<endl<<sizeof(*pe)<<endl;
return 0;
}
