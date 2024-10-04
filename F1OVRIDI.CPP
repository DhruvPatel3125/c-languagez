// C++ program to demonstrate function overriding
// by calling the overridden function
// of a member function from the child class

#include <iostream.h>
#include<conio.h>

class Parent {
public:
    void base_Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void base_Print()
    {
        cout << "Derived Function" << endl;

        // call of original function
        Parent::base_Print();
    }
};

void main()
{clrscr();
    Child Child_Derived;
    Child_Derived.base_Print();
    getch();
}
