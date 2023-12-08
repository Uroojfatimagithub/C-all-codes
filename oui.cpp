#include <iostream>
using namespace std; 
struct faculty {
    char fac_name[20];
    char fac_gender[10];
    int fac_age;
    char fac_deptt[30];
    int fac_BPS;
    char fac_address[20];
};

void record_set(faculty&f)
{
	    cout << "Enter faculty name: ";
          cin>>f.fac_name;
    cout << "Enter faculty gender (M/F/O): ";
    cin >> f.fac_gender;
    cout << "Enter faculty age: ";
    cin >> f.fac_age;
    cout << "Enter faculty department: ";
    cin>>f.fac_deptt;
    cout << "Enter faculty BPS: ";
    cin >> f.fac_BPS;
    cout << "Enter faculty address: ";
    cin>>f.fac_address;
}
void record_display(faculty&f)
{
    cout << "Faculty Name: " << f.fac_name << endl;
    cout << "Gender: " << f.fac_gender << endl;
    cout << "Age: " << f.fac_age << endl;
    cout << "Department: " << f.fac_deptt << endl;
    cout << "BPS: " << f.fac_BPS << endl;
    cout << "Address: " << f.fac_address << endl;
}
int main()
{
   faculty f;
   cout<<"taking input data";
   record_set(f);
   cout<<"displaying record";
   record_display(f);
   return 0;
}


