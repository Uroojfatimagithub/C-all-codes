//Book shop Project Using Structure in C++
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int i=0;
struct Bookshop
{
	string groupmembers;
int id;
float price;
string name,a_name,p_name;
}B[25];
//Heading Function
void Heading()
{
    cout<<"Book Shop Project in C++";}
//Insert New Book
void Insert()
{
	fstream f;
	f.open("E:bookshop_file.txt",ios::app);
if(f.is_open())
{
Heading();
cout<<"\nEnter Book ID:";
cin>>B[i].id;
cout<<"\nEnter Book Name:";
cin>>B[i].name;
cout<<"\nEnter Author Name:";
cin>>B[i].a_name;
cout<<"\nEnter Publisher Name:";
cin>>B[i].p_name;
cout<<"\nEnter Book Price:";
cin>>B[i].price;
f <<B[i].id<<"\t"<<B[i].name<<"\t"<<B[i].a_name<<"\t"<<B[i].p_name<<"\t"<<B[i].price<<"\n";
i++;
cout<<"Insert New Book Successfully "<<endl;}
else
{
cout<<"File is not found";}
f.close();
}
// Search Book
void Search()
{
system("cls");
Heading();
if(i==0)
cout<<"Structure Is Empty "<<endl;
else
{
int t_id,found=0;
cout<<"\nEnter Book For Search:";
cin>>t_id;
for(int a=0;a<i;a++)
{
if(t_id== B[a].id)
{
cout<<"\nBook Name:"<<B[a].name;
cout<<"\nAuthor Name:"<<B[a].a_name;
cout<<"\nPublish Name:"<<B[a].p_name;
cout<<"\nBook Price:"<<B[a].price;
found++;
break;
}
}
if(found == 0)
cout<<"Book Is Not Found "<<endl;
}
}
// Update Book
void Update()
{
system("cls");
Heading();
if(i==0)
cout<<"Structure Is Empty "<<endl;
else
{
int t_id,found=0;
cout<<"Enter Book For Update:";
cin>>t_id;
for(int a=0;a<i;a++)
{
if(t_id== B[a].id)
{
cout<<"\n\n Enter Book Name -> ";
cin>>B[a].name;
cout<<"\n\n Enter Author Name -> ";
cin>>B[a].a_name;
cout<<"\n\n Enter Publisher Name -> ";
cin>>B[a].p_name;
cout<<"\n\n Enter Book Price -> ";
cin>>B[a].price;
cout<<" Update Book Successfully "<<endl;
found++;
break;
}
}
if(found == 0)
cout<<"Book Is Not Found "<<endl ;
}
}
// Delete Book
void Delete()
{
system("cls");
Heading();
if(i==0)
cout<<"Structure Is Empty "<<endl;
else
{
int t_id,found=0;
cout<<"Enter Book ID For Delete:";
cin>>t_id;
for(int a=0;a<i;a++)
{
if(t_id== B[a].id)
{
 for(int k=a;k<i;k++)
 {
 B[k].id = B[k+1].id;
 B[k].name = B[k+1].name;
 B[k].a_name = B[k+1].a_name;
 B[k].p_name = B[k+1].p_name;
 B[k].price = B[k+1].price;
}
cout<<"Delete Book Successfully "<<endl;
found++;
i--;
break;
}
}
if(found == 0)
cout<<"Book Is Not Found "<<endl;
}
}
//Show All Books
void Show()
{
system("cls");
Heading();
if(i==0)
cout<<"Structure Is Empty "<<endl;
else
{
for(int a=0;a<i;a++)
{
cout<<"\nBook ID:"<<B[a].id;
cout<<"\nBook Name:"<<B[a].name;
cout<<"\nAuthor Name:"<<B[a].a_name;
cout<<"\nPublish Name:"<<B[a].p_name;
cout<<"\nBook Price:"<<B[a].price<<endl;
}
}
}
main()
{
	cout<<"GROUP MEMBERS NAMES:\n";
	  Bookshop names[] = {{"zenab"}, {"urooj"}, {"bushra"},{"iqra"}};
    Bookshop* ptrNames[4];
    for (int j = 0; j < 4; j++) {
        ptrNames[j] = &names[j];
    }
    for (int j= 0; j < 4; j++) {
        cout <<ptrNames[j]->groupmembers<< endl;
    }
	 
   p:
    int choice;
 Heading();
 cout<<"\n\n "<<"1 . Insert Book";
 cout<<"\n\n "<<"2 . Search Book";
 cout<<"\n\n "<<"3 . Update Book";
 cout<<"\n\n "<<"4 . Delete Book";
 cout<<"\n\n "<<"5 . Show All Book";
 cout<<"\n\n "<<"6 . Exit\n";
 cout<<" Enter Your Choice ?";
 cin>>choice;
 switch(choice)
 {
 case 1:
 Insert();
 break;
 case 2:
 Search();
 break;
 case 3:
 Update();
 break;
 case 4:
 Delete();
 break;
 case 5:
 Show();
 break;
 case 6:
 exit(0);
 default:
 cout<<" Please Select Correct Option "<<endl;
}
getch();
 goto p;
}
 

