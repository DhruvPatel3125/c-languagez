#include <iostream.h>
#include<conio.h>
class A
{
public:
virtual void display()
{
cout << "Base class is invoked"<<endl;
}
};
class B : public A
{
public:
void display()
{
cout << "Derived Class is invoked"<<endl;
}
};
void main()
{
clrscr();
A *a;
A a1;
B b1;
a=&a1;
a->display();
a=&b1;
a->display();
getch();
}
