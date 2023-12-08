#include <iostream>
#include <string>

using namespace std;

// Define a structure with members
struct Organization {
    int code;
    string name;
    string city;
    string country;
};

int main() {
    // Declare a structure type variable
    Organization org;

    // Take input from the user
    cout << "Enter organization code: ";
    cin >> org.code;

    cout << "Enter organization name: ";
    cin>>org.name;

    cout << "Enter organization city: ";
    cin>>org.city;

    cout << "Enter organization country: ";
    cin>>org.country;

    // Print the data on the screen
    cout << endl << "Organization Code: " << org.code << endl;
    cout << "Organization Name: " << org.name << endl;
    cout << "Organization City: " << org.city << endl;
    cout << "Organization Country: " << org.country << endl;

    return 0;
}

