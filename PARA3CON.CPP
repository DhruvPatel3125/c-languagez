// parameterized   constructor
#include <iostream.h>
#include<conio.h>
#include <string.h>
class student {  //class create
	int rno;          //class datamember
	char name[50];
	double fee;

public:
	student(int, char[], double); //parameterized constructor inside class
	void display(); //member function inside class
};
// parameterized constructor outside class
student::student(int no, char n[], double f)
{
	rno = no;
	strcpy(name, n); //string function
	fee = f;
}
void student::display()     //:: scope resultion operator
{
	cout << endl << rno << "\t" << name << "\t" << fee;
}
void main()
{
	clrscr();
	student s(1001, "Ram", 10000);    //object through value pass
	s.display();
	getch();
}
