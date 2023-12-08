#include<iostream>
using namespace std;
class Circle
{
	private:
	int x;
	int y;
	float r;
	public:
	Circle()
	{
		x=0;
		y=0;
		r=0.0;
	}
	Circle(int a,int b,float c)
	{
		x=a;
		y=b;
		r=c;
	}
	float area()
	{
		return (3.14*r*r);
	}
	float circumference()
	{
		return (2*3.14*r);
	}
};
int main()
{
	Circle c1,c2(5,6,3.0);
	cout<<"Area of circle" <<c2.area()<<endl;
	cout<<"circumference of a circle" <<c2.circumference()<<endl;
	system("pause");
	return 0;
}
