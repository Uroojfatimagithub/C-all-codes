#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    char ch;
    int pos;
    cout << "Enter a string: ";
    cin.getline(str, MAX_SIZE);
    cout<<"original string"<<str<<endl;
    cout << "Enter a character to insert: ";
    cin >> ch;
    cout << "Enter the position to insert the character (starting from 0): ";
    cin >> pos;
    int len = strlen(str);
    for (int i = len; i >= pos; i--) {
        str[i+1] = str[i];
}
    str[pos] = ch;
    cout << "Modified string: " << str << endl;

    return 0;
}
   

