#include<iostream>
using namespace std;
class Point
{
	private:
	int x;
	int y;
	public:
    // Constructors
    Point() 
	{
        x = 0;
        y = 0;
    }

    Point(int a, int b) 
	{
        x = a;
        y = b;
    }
    void set_X(int a) {
        x = a;
    }
     void set_Y(int b) {
        y = b;
    }
     int get_X() 
	{
        return x;
    }
    int get_Y() {
        return y;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Declare two points and display them
    Point p1(1, 2);
    Point p2(3, 4);
    p1.display();
    p2.display();
    // Change the values of x and y using set functions
    p1.set_X(5);
    p1.set_Y(4);

    p2.set_X(4);
    p2.set_Y(5);

    // Add the x and y coordinates of each point and print the result
    int sumx = p1.get_X() + p2.get_X();
    int sumy= p1.get_Y() + p2.get_Y();

    cout << "Sum of x coordinates: " << sumx << endl;
    cout << "Sum of y coordinates: " << sumy << endl;

    return 0;
}

