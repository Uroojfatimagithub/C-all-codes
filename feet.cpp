#include<iostream>
using namespace std;
class Distance
{
	private:
  int feet;
  float inches;
  public:
  void input()
  {
  	cin>>feet>>inches;
  }
  void display()
  {
  	cout<<feet<<","<<inches;
  }
  Distance add(Distance,Distance);
};
Distance Distance::add(Distance d2,Distance d3)
{
	Distance temp;
	temp.inches=inches+d2.inches+d3.inches;
	if(temp.inches>=12.0)
	{
		temp.inches=temp.inches-12.0;
		temp.feet++;
	}
	temp.feet=feet+d2.feet+d3.feet;
	return temp;
}
int main()
{
	Distance d1,d2,d3,d4;
	           d1.input();
	d2.input();
	d3.input();
	d4=d1.add(d2,d3);
	d4.display();
}
