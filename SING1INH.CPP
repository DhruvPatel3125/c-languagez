#include <iostream.h>
#include<conio.h>

class A
{
	public:
	void display()
	{
	    cout<<"super class display function \n";
	}

};
class B: public A
{
	public:
	void show()
	{
	cout<<" subclass show function";
	}
};
void main()
{
	clrscr();
	B ob;
	ob.display();
	ob.show();
	getch();
}