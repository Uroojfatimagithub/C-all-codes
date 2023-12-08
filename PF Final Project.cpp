


//Header files
#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>

using namespace std;

//functions prototypes
int order();
int roomtype();
int roomsize();
int rent(int *x,int *y);
void displaymenu();
void take_order();

//global structure
struct per_det{
	char name[100];     //character array
	int phone_number;
	string address;
};

//main function
main(){
	
	per_det p1;    //declaring structure variable
	
	int l,num, days,x,y,z,enter;   //declaring variables
	
	cout<<"\n";
	cout<<"------------------------\n";
	cout<<"||WELCOME TO OUR HOTEL||\n";
	cout<<"------------------------\n";
	
	l=order();   //calling order function and storing in variable l
  
	if (l==1){
		displaymenu();
    	take_order();
	}
	
	else if (l==2){
	
   	//entering data
   	
		cout<<"\nPlease enter your name: \n";
        cin.ignore();
    	cin.get(p1.name,100);
	    cout<<"\nEnter your phone number: \n";
    	cin>>p1.phone_number;
    	cout<<"\nEnter your address: \n";
        cin.ignore();
    	getline(cin, p1.address);

    //storing data in files
		
    	fstream object;
  	    object.open("ourfile.txt",ios::in|ios::out|ios::app);
  	    object << "Name = "<<p1.name << "," << "Phone no. = "<<p1.phone_number << "," << "Address = "<<p1.address;

        cin.ignore();
	
	x=roomtype();
    y=roomsize();
    
    cout<<"\nEnter the number of rooms to be booked: ";
    cin>>num;
    z=rent(&x,&y);
    cout<<"\nEnter the number of days for which rooms need to be booked: ";
    cin>>days;
    cout<<"\n\n>>>Your charges will be "<<z*days*num;
		
	cout<<"\n\nDo you also want some food?\n";
	cout<<"If 'yes' enter 1: \n";
	cin>>enter;
	
	if(enter==1){
		displaymenu();
    	take_order();
	}
	else 
	    cout<<"OK. THANK YOU!";
	}
}

int order(){  
	int option;
	cout<<"\nHow can we help you today?\n\n";
	cout<<"If want to order dilicious food, Please enter 1\n";
	cout<<"If want to book a room, Please enter 2\n\n";
	cin>>option;
	    if(option==1||option==2){
	    	return option;
	    }
		else if (option!=1&&option!=2){
	    	cout<<"\n\nPlease Enter a valid number!\n\n\n";
	    	order();    //recursive function
	    	return option;
			}
		}
		

int roomtype(){
	int a;
	do{
	cout<<"\nPlease select the type of room(Enter 1 or 2)\n";
	cout<<"1.AC \n2.Non-AC\n";
	cin>>a;}while(a!=1 && a!=2);
	
        if(a==1){
        	cout<<"\n>>>you selected AC room"<<endl;
        }
        else if(a==2){
	        cout<<"\n>>>You selected a Non AC room"<<endl;
        }	
        return a;
    }
    
    
int roomsize(){
	int b;
	do{
    cout<<"\nPlease select size of room:"<<endl;
	cout<<"1.Single bed room\n2.Double bed room\n3.Triple bed room"<<endl;
	cin>>b;}while(b!=1 && b!=2 && b!=3);
	
	if(b==1){
		cout<<"\n>>>You have selected single bed room"<<endl;
	}
	else if(b==2){
		cout<<"\n>>>you have selected double bed room"<<endl;
	}
	else if(b==3){
		cout<<"\n>>>you have selected triple bed room\n"<<endl;
	} 
	return b;
}

int rent(int *x,int *y){   //calling by address(use of pointers)
	int rent;
	if(*x==1&&*y==1)
	    rent=3000;
	else if(*x==1&&*y==2)
	    rent=3500;
	else if(*x==1&&*y==3)
	    rent=4000;
	else if(*x==2&&*y==1)
	    rent=2000;
	else if(*x==2&&*y==2)
	    rent=2500;
	else if(*x==2&&*y==3)
	    rent=3000;		
	return rent;		    
}	    	

void displaymenu(){
	    cout<<"--------\n";
	    cout<<"||MENU||\n";
     	cout<<"--------\n";
	    cout<<"1. Burger (Rs.500) "<<endl;
		cout<<"2. pizza (Rs.1000) "<<endl;
		cout<<"3. Sandwich (Rs.200) "<<endl;
		cout<<"4. White pasta  (Rs.700) "<<endl;
		cout<<"5. Nuggets 1 piece  (Rs.50) "<<endl;
		cout<<"6. French fries  (Rs.300) "<<endl;
		cout<<"7. Cofee  (Rs.150) "<<endl;		
}

void take_order( )
{
	int quantity;
	int charge;
	int order;
	int count=0;
	cout<<"\n\nWhat would u like to order? (please enter 1,2,3,4,5,6 or 7)"<<endl;
	cin>>order;
	for(int i=1;i<=7;i++){
	if(order!=i)
	    count++;
	if(count==7){
		cout<<"Sorry. We don't have this option! \n";
		take_order();    //recursive function
	}
	}
	
	cin.ignore();
	
	cout<<"How much quantity do u want? "<<endl;
	cin>>quantity;
	
	switch(order)
	{
		case 1:
			charge=quantity*500;
			cout<<"Total charges (Burger) : "<<charge<<endl;
            break;	
		case 2:
			charge=quantity*1000;
			cout<<"Total charges (pizza) : "<<charge<<endl;
            break;	
	    case 3:
			charge=quantity*200;
			cout<<"Total charges (sandwich) : "<<charge<<endl;
            break;	
	    case 4:
			charge=quantity*700;
			cout<<"Total charges (White pasta) : "<<charge<<endl;
            break;	
	    case 5:
			charge=quantity*50;
			cout<<"Total charges (Nuggets) : "<<charge<<endl;
            break;	
     	case 6:
			charge=quantity*300;
			cout<<"Total charges (French fries) : "<<charge<<endl;
            break;	
	    case 7:
			charge=quantity*150;
			cout<<"Total charges (Coffee) : "<<charge<<endl;
            break;	
}
}
