#include "stdafx.h"
#include <iostream>
using namespace std;
void print();
void print()
{
	cout << endl << endl;
	cout << "\t" << "\t" << "*--------------Main Menu-------------*" << endl;
	cout << endl;
	cout << "                     " << "STUDENT INFORMATION SYSTEM" << endl;
	cout << "                      " << "1. Add New Student" << endl;
	cout << "                      " << "2. View Student Info" << endl;
	cout << "                      " << "3. Timings Of Students" << endl;
	cout << "                      " << "4. Delete Student Info" << endl;
	cout << "                      " << "5. Exit" << endl;

}
struct student
{
	char f_name[15];
	char l_name[15];
	int age, phone, regno;
	char gender[10], home_ad[50], clas[20];
}	var[10];
struct course
{
	int course_code;
	char course_tittle[20];
}	c[5];

int main()
{
	cout << endl << endl;
	cout << "            " << "*--------General Overview of the Program-------*" << endl;
	print();
	int i;
	int a;
	cout << endl << endl;
	cout << "Enter your choice from [1-5]" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		student var[10];
		int i = 0;
		char ch;
		while (i < 10)

		{
			cout << "Enter First Name :";
			cin >> var[i].f_name;
			cout << "Enter Last Name :";
			cin >> var[i].l_name;
			cout << "Enter Age :";
			cin >> var[i].age;
			cout << " Enter Phone number : ";
			cin >> var[i].phone;
			cout << "Enter Gender:";
			cin >> var[i].gender;
			cout << "Enter Reg# : ";
			cin >> var[i].regno;
			cout << "Enter Class :";
			cin >> var[i].clas;
			cout << "Enter Home address :";
			cin >> var[i].home_ad;
			cout << "New Student" << endl;
			cout << "First Name :" << var[i].f_name << endl;
			cout << "Last Name : " << var[i].l_name << endl;
			cout << "Age :" << var[i].age << endl;
			cout << "Phone number :" << var[i].phone << endl;
			cout << "REG #  : " << var[i].regno << endl;
			cout << "Gender : " << var[i].gender << endl;
			cout << "Class :" << var[i].clas << endl;
			cout << "Home address :" << var[i].home_ad << endl;
		
		{
			course c;
			for (i = 0; i <= 5; i++)
			{
				cout << "Enter course code : ";
				cin >> c.course_code;
				cout << "Enter course tittle : ";
				cin >> c.course_tittle;
			}
			for (i = 0; i <= 5; i++)
			{
				cout << " Course code :" << c.course_code << endl;
				cout << " Course tittle :" << c.course_tittle << endl;
			}
		}
		cout << "Do you want to add new student?" << endl;
		cout << "If yes, then enter Y or y" << endl;
		cout << "If no, then press any other key to continue the program" << endl;
		cin >> ch;
		if ((ch == 'y') || (ch == 'Y'))
			continue;
		else
			break;
		}
		}
		case 2:
	{
		int z;
		cout << "                             " << "*---------View Student Info--------*" << endl << endl;
		char password[20];
		cout << "Enter Admin Password " << endl;
		cin >> password;
		string admin_password = "NOSHEEN";
		cout << "Enter  REG# from [1-10] to View Student Information" << endl;
		cin >> z;
		if (z == 1)
		{
			cout << "New Student :1" << endl;
			cout << "First Name : NOSHEEN" << endl;
			cout << "Last Name :NOSHEEN " << endl;
			cout << "Age : 20" << endl;
			cout << "Phone number : 567" << endl;
			cout << "REG #  : 1" << endl;
			cout << "Gender : FEMALE" << endl;
			cout << "Class :BSE" << endl;
			cout << "Home address :H-123" << endl;
			cout << endl;
		}
		else if (z == 2)
		{
			cout << "New Student :2" << endl;
			cout << "First Name : MAHRUKH" << endl;
			cout << "Last Name : WAFA " << endl;
			cout << "Age : 20" << endl;
			cout << "Phone number : 15647" << endl;
			cout << "REG #  : 2" << endl;
			cout << "Gender : FEMALE" << endl;
			cout << "Class :BSE" << endl;
			cout << "Home address :H-123,L09" << endl;
			cout << endl;
		}
		else if (z == 3)
		{
			cout << "New Student :3" << endl;
			cout << "First Name : MUHAMMAD" << endl;
			cout << "Last Name : ATTA" << endl;
			cout << "Age : 17" << endl;
			cout << "Phone number : 0321" << endl;
			cout << "REG #  : 3" << endl;
			cout << "Gender : MALE" << endl;
			cout << "Class :BSE" << endl;
			cout << "Home address :H-123" << endl;
		}
		else if (z == 4)
		{
			cout << "New Student :4" << endl;
			cout << "First Name : SAIF" << endl;
			cout << "Last Name :RAHMAN " << endl;
			cout << "Age : 17" << endl;
			cout << "Phone number : 1234" << endl;
			cout << "REG #  : 4" << endl;
			cout << "Gender : MALE" << endl;
			cout << "Class :BSCS" << endl;
			cout << "Home address :H-123" << endl;
		}
		else if (z == 5)
		{
			cout << "New Student :5" << endl;
			cout << "First Name : MUHAMMAD" << endl;
			cout << "Last Name : HARIS " << endl;
			cout << "Age : 20" << endl;
			cout << "Phone number : 567" << endl;
			cout << "REG #  : 5" << endl;
			cout << "Gender : MALE" << endl;
			cout << "Class :BSE" << endl;
			cout << "Home address :H-673" << endl;
		}
		else if (z == 6)
		{
			cout << "New Student :6" << endl;
			cout << "First Name : ANIQUE" << endl;
			cout << "Last Name : UR RAHMAN " << endl;
			cout << "Age : 20" << endl;
			cout << "Phone number : 7654" << endl;
			cout << "REG #  : 6 " << endl;
			cout << "Gender : MALE" << endl;
			cout << "Class :BCA" << endl;
			cout << "Home address :H-523" << endl;
		}
		else if (z == 7)
		{
			cout << "New Student :7" << endl;
			cout << "First Name : MEHAK" << endl;
			cout << "Last Name : GULL " << endl;
			cout << "Age : 18" << endl;
			cout << "Phone number : 90567" << endl;
			cout << "REG #  : 7" << endl;
			cout << "Gender : FEMALE" << endl;
			cout << "Class :BSCS" << endl;
			cout << "Home address :H-1923" << endl;

		}
		else if (z == 8)
		{
			cout << "New Student :8" << endl;
			cout << "First Name : MEHAR" << endl;
			cout << "Last Name : KULSOOM " << endl;
			cout << "Age : 17" << endl;
			cout << "Phone number : 1567" << endl;
			cout << "REG #  : 8 " << endl;
			cout << "Gender : FEMALE" << endl;
			cout << "Class :BCA" << endl;
			cout << "Home address :H-123,K-98" << endl;

		}
		else if (z == 9)
		{
			cout << "New Student :9" << endl;
			cout << "First Name : MUHAMMAD " << endl;
			cout << "Last Name : ALEEM" << endl;
			cout << "Age : 18" << endl;
			cout << "Phone number : 5607" << endl;
			cout << "REG #  : 9" << endl;
			cout << "Gender : MALE" << endl;
			cout << "Class :BSCS" << endl;
			cout << "Home address :H-123,Y76" << endl;

		}
		else if (z == 10)
		{
			cout << "New Student :10" << endl;
			cout << "First Name : MUHAMMAD" << endl;
			cout << "Last Name : ANAS" << endl;
			cout << "Age : 17" << endl;
			cout << "Phone number : 50607" << endl;
			cout << "REG #  : 10" << endl;
			cout << "Gender : MALE" << endl;
			cout << "Class :BCA" << endl;
			cout << "Home address :H-123,I98" << endl;

		}
		else
			cout << "No Such Student Found";
		
	}
	case 3:
	{
		int w;
		cout << "                           " << "*-------Check the Timings of Students------*" << endl;
		cout << "                           " << "*------- 1. Timings of BSE STUDENTS------*" << endl;
		cout << "                           " << "*-------2. Timings of BSCS STUDENTS------*" << endl;
		cout << "                   	     "<< "*------3. Timings of BCA STUDENTS------*" << endl;
		cout << "       				 " << "*------------4. Exit-----------*" << endl;
		char password[20];
		cout << "Enter Admin Password " << endl;
		cin >> password;
		string admin_password = "NOSHEEN";
		cout << "Enter Option from [1-3] to View Timings of Students .	(Enter 4 to Exit ) " << endl;
		cin >> w;
		if (w == 1)
		{
			cout << endl;
			cout << "                           " << "*-------Timings of BSE STUDENTS------*" << endl;
			cout << "NOSHEEN NOSHEEN" << endl;
			cout << "MAHRUKH WAFA " << endl;
			cout << "MUHAMMAD ATTA" << endl;
			cout << "MUHAMMAD HARIS " << endl;
			cout << "Monday   : 8:00-12:00" << endl;
			cout << "Tuesday  : 4:00-8:00" << endl;
			cout << "Wednesday: 8:00-12:00" << endl;
			cout << "Thursday : 8:00-12:00" << endl;
			cout << "Friday   : 10:00-12:00" << endl;
			cout << "Saturday : Holiday" << endl;
			cout << "Sunday   : Holiday" << endl;

		}
		else if (w == 2)
		{
			cout << endl;
			cout << "                         " << "*-------Timings of BSCS STUDENTS-------*" << endl;
			cout << "" << endl;
			cout << "MUHAMMAD ALEEM " << endl;
			cout << "SAIF RAHMAN" << endl;
			cout << "MEHAK GULL" << endl;
			cout << "Monday   : 1:00-4:00" << endl;
			cout << "Tuesday  : 8:00-12:00" << endl;
			cout << "Wednesday: 4:00-6:00" << endl;
			cout << "Thursday : 8:00-12:00" << endl;
			cout << "Friday   : 10:00-12:00" << endl;
			cout << "Saturday : Holiday" << endl;
			cout << "Sunday   : Holiday" << endl;

		}

		else if (w == 3)
		{
			cout << "                    " << "*------Timings of BCA STUDENTS------*" << endl;
			cout << "MUHAMMAD ANIQUE" << endl;
			cout << "MEHAR KULSOOM" << endl;
			cout << "MUHAMMAD ANAS" << endl;
			cout << "Monday   : 10:00-1:00" << endl;
			cout << "Tuesday  : 9:00-12:00" << endl;
			cout << "Wednesday: 9:00-1:00" << endl;
			cout << "Thursday : 10:00-4:00" << endl;
			cout << "Friday   : 2:00-6:00" << endl;
			cout << "Saturday : Holiday" << endl;
			cout << "Sunday   : Holiday" << endl;

		}

		else
		{
			cout << "Wrong Input . Exit Program" << endl;

		}
		
	}
	case 4:
	{
		cout << "                                   " << "*-------Delete Student Info-------*" << endl;
		int l;
		char password[20];
		cout << "Enter Admin Password " << endl;
		cin >> password;
		string admin_password = "NOSHEEN";
		cout << "Enter the student number u want to delete from 1-10" << endl;
		cin >> l;
		if (l == 1)
		{
			cout << "This student's information having reg # 1 has been deleted successfully" << endl;

		}
		else if (l == 2)
		{
			cout << "This student's information having reg # 2 has been deleted successfully" << endl;

		}
		else if (l == 3)
		{
			cout << "This student's information having reg # 3 has been deleted successfully" << endl;

		}
		else if (l == 4)
		{
			cout << "This student's information having reg # 4 has been deleted successfully" << endl;

		}
		else if (l == 5)
		{
			cout << "This student's information having reg # 5 has been deleted successfully" << endl;

		}
		else if (l == 6)
		{
			cout << "This student's information having reg # 6 has been deleted successfully" << endl;

		}
		else if (l == 7)
		{
			cout << "This student's information having reg # 7 has been deleted successfully" << endl;

		}
		else if (l == 8)
		{
			cout << "This student's information having reg # 8 has been deleted successfully" << endl;

		}
		else if (l == 9)
		{
			cout << "This student's information having reg # 9 has been deleted successfully" << endl;

		}
		else if (l == 10)
		{
			cout << "This student's information having reg # 10 has been deleted successfully" << endl;

		}
		else
		{
			cout << "NO SUCH STUDENT EXISTS" << endl;

		}
		
	}
	case 5:
	{
		cout << "                                 " << "*-------Exit-------*" << endl;
		int a;
		cout << "Enter 1 to exit " << endl;
		cin >> a;
		if (a == 1)
			cout << endl;
		cout << "                  " << "The End of Program" << endl;
		break;
	}
	default:
	{
		cout << "Wrong Input" << endl; 
		break;
	}
	}
	system("pause");
	return 0;
}

_____________________________________________________________________________


