#include<iostream>
using namespace std;
void areaofcircle(int *radius,int *result);
int main()
{
	int radius;
	int area;
	cout<<"enter the radius of circle:\n";
	cin>>radius;
	areaofcircle(&radius,&area);
	return 0;
}
void areaofcircle(int *radius,int *result)
{
	*result=3.14*(*radius)*(*radius);
	cout<<"the area of circle is"<<*result;
}
