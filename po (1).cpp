#include <iostream>
#include <cstring>
using namespace std;
struct Person {
    char name[50];
    int age;
};
void copyPerson(Person& p2,Person& p1) {
    strcpy(p2.name, p1.name);
    p2.age = p1.age;
}
int main() {
    Person p1,p2;
    strcpy(p1.name, "John");
    p1.age = 30;
    copyPerson(p2, p1);
    cout << "Name: " << p2.name << endl;
    cout << "Age: " << p2.age << endl;
    return 0;
}

