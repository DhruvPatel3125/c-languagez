//default constructor
#include<iostream.h>
#include<conio.h>

class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student()		      // Explicit Default constructor
	{
		cout<<"Enter the RollNo:";
		cin>>rno;
		cout<<"Enter the Name:";
		cin>>name;
		cout<<"Enter the Fee:";
		cin>>fee;
		cout<<endl<<"--Student Details--";
		cout<<endl<<"rno"<<"\t"<<"name"<<"\t"<<"fee";
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;

	}

	/*void display()
	{          cout<<endl<<"--Student Details--";
		cout<<endl<<"rno"<<"\t"<<"name"<<"\t"<<"fee";
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	} */
};

void main()
{
	clrscr();
	student s;
	//s.display();
	getch();
}
