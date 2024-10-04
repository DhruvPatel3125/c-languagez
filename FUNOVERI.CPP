//function overriding example
#include <iostream.h>
#include<conio.h>
class magic1
{
public:
void display()
{
cout<<"\nDisplay from Magic1class...";
}
};
class magic2: public magic1
{
public:
void display()
{
cout<<"\nDisplay from Magic2class...";
}
};
void main()
{
clrscr(); 
magic2 m2;
m2.magic1::display(); // call magic1class method 
m2.display();
getch();
}
