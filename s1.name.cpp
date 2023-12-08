#include <iostream>
using namespace std;
struct Person {
    string name;
    int age;
};

int main() { 
    Person person1; 
    Person person2; // Create another Person object
  cout<<"enter the name:";
  cin>>person1.name;
  cout<<"enter the age";
  cin>>person1.age;
    // Copy the contents of person1 to person2
    person2.name = person1.name;
    person2.age = person1.age;

    // Print the contents of person2 on the screen
    cout << "Name: " << person2.name <<endl;
    cout << "Age: " << person2.age <<endl;

    return 0;
}

