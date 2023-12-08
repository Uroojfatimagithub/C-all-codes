#include <iostream>
using namespace std;
int main()
{
	 int i,j;
    int stud[4][3];

    for (i = 0; i < 4; i++) {
        cout << "Enter roll number, marks, and CGPA for student :\n ";
        for (j = 0; j < 3; j++) {
            cin >> stud[i][j];
        }
    }
    cout << "Roll Number\tMarks\tCGPA" << endl;
    for (i= 0;i<4;i++) {
        for (j=0;j<3;j++) {
            cout <<stud[i][j]<<"\t\t";
        }
        cout << endl;
    }

    return 0;
}





	
	
	
	
	
	
	
