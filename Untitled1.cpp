#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
		int regno;
		float cgpa;
    public:
    	student():name("\0"),regno(0),cgpa(0.0)
    	{}
    	student(string n,int r,float g):name(n),regno(r),cgpa(g)
    	{}
    	~student()
    	{
    		cout<<"object is destroyed";
		}
    	void input()
    	{
    		cin>>name>>regno>>cgpa;
		}
		void display()
		{
			cout<<name<<regno<<cgpa; 
		}
};
int main()
{
	student s1;
	s1.input();
	s1.display();
	student s2,s3("sara",74,3.5);
	s2.display();
	s3.display();
}
