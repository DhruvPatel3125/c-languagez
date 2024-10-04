// C++ program to demonstrate compile time function overriding

#include <iostream.h>
#include<conio.h>


class Parent {
public:
    void Base_Print()
    {
	cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void Base_Print()
    {
	cout << "Derived Function" << endl;
    }
};
void main()
{   clrscr();
    Child obj;
    obj.Base_Print();
    getch();
}
